#include <iostream>
#include <string>
#include <map>
using namespace std;


int main()
{
    map <char, int> chCount;
    
    char c;
    cin >> c;

    while (c != '.') {
        if (c >= 'a' && c <= 'z'){
            chCount[c]++;
        }
        cin >> c;
    }

    for (char i = 'a'; i <= 'z'; i++) {
        if (chCount.count(i) != 0) {
            cout << i << chCount[i] << endl;
        }
    }

    return 0;
}
