#include <iostream>
#include <map>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    map <char, int> countLetters;
    char c;
    cin >> c;


    while (c != '.') {
        c = toupper(c);
        if (countLetters.count(c)) {
            countLetters[c]++;
        }
        else {
            countLetters[c] = 1;
        }

        cin >> c;
    }


    int nechetn = 0;
    string nechetnChar = "";
    for (char i = 'A'; i <= 'Z'; i++) {
        if (countLetters.count(i)) {
            if (countLetters[i] % 2 != 0) {
                nechetn++;
                nechetnChar = i;
                countLetters[i]--;
                if (nechetn >= 2) {
                    cout << "Нет";
                    return 0;
                }
            }
        }
    }

    cout << "Да" << endl;
    string s;
    s += nechetnChar;
    for (char i = 'Z'; i >= 'A'; i--) {
        if (countLetters.count(i)) {
            while (countLetters[i]) {
                s = i + s + i;
                countLetters[i] -= 2;
            }
        }
    }

    cout << s;
    return 0;
}