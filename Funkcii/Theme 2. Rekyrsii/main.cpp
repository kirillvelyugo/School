#include <iostream>
#include <string>
using namespace std;

string zam(string s, int i){
    string s1(1, s[i]);
    if (i == s.size()){
        return " ";
    }
    if (s.size() % 2 != 0 && i == s.size() / 2){
        return s1;
    }
    if ((s.size() % 2 == 0) && (i == (s.size() / 2) - 1) || (i == s.size() / 2)){
        return s1; 
    }
    if (i <= (s.size() / 2) - 1){
        return s1 + '(';
    }
    if ((i > (s.size() / 2) + 1) && (s.size() % 2 == 0) || (i >= s.size() / 2 + 1) && (s.size() % 2 == 1){
        return s1 + ')';
    }
}
int main(){
    string s;
    cin >> s;
    
    cout << zam(s, 0) << '\n';
    return 0;
}