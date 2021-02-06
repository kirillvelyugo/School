#include <iostream>
#include <string>
using namespace std;

string sok(string s, int i) {
    if (s.size() % 2 == 0 && i == s.size() / 2 - 1){
        if (s[i] == s[i + 1]){
            return "";
        }else{
            return s[i] + string ("") + s[i + 1];                   
        }
    }
    if (s.size() % 2 != 0 && i == s.size() / 2){
        return string (1, s[i]);
    }
    if (s[i] == s[s.size() - i - 1]){
        return sok(s, i + 1);
    }else {
        return s[i] + sok(s, i + 1) + s[s.size() - i - 1];
    }
}

int main(){
    string s;
    cin >> s;
    
    cout << sok(s, 0);
    
    return 0;
}