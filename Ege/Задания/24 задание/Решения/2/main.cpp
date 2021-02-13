#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file ("24-s2.txt");
    string s;
    char l;
    int a[26] = {0};
    int max = 0;
    file >> s;

    for (int i = 0; i < s.size() - 2; i++){
        if (s[i] == 'X' && s[i + 2] == 'Z'){
            a[s[i + 1] - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++){
        if (a[i] > max){
            max = a[i];
        }
    }

    for (int i = 0; i < 26; i++){
        if (max == a[i]){
            l = 'A' + i;
        }
    }

    cout << l << max;
    return 0;
}
