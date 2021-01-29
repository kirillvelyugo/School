#include <iostream>
#include <string>
using namespace std;

string sok(string s, int i) {
    if (i == s.size() - 1){
        if (s[0] != s[i]){
            string s1(1, s[i]);
            return s1;
        }else{
            string s2(1, s[i - 1]);
            return s2;
        }
    }else {
        if (s[i] == s[s.size() - i - 1]){
            return s[1, i + 1] + sok(s, i + 1) + s[1, s.size() - i - 2];
        }else {
            return s[1, i] + sok(s, i + 1) + s[1, s.size() - i - 2];
        }
    }
}

int main(){
    string s;
    cin >> s;
    
    cout << sok(s, 0);
    
    return 0;
}




