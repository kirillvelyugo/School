#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map <char, int> s;

    char c;
    cin >> c;

    while (c != '.') {
        s[toupper(c)]++;
        cin >> c;
    }

    int maxCount = 0;
    char maxChar = ' ';

    for (char i = 'A'; i <= 'Z'; i++) {
        if (s[i] > maxCount) {
            maxCount = s[i];
            maxChar = i;
        }
    }

    cout << maxChar << ' ' << maxCount;
    return 0;
}
