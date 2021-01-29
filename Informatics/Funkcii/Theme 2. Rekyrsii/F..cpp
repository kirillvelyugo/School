#include <iostream>
#include <string>
using namespace std;

string zerk(string s, int i) {
    if (i == s.size() - 1){
        if (s[i] == '('){
            return "()";
        }else {
            string k(2, s[i]);
            return k;
        }
    }
    
    if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
        return s[i] + zerk(s, i + 1) + s[i];
    }
    if (s[i] == '('){
        return s[i] + zerk(s, i + 1) + ")";
    }
}

int main(){
    string s;
    cin >> s;
    
    cout << zerk(s, 0) << '\n';

    return 0;
}




