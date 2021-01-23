#include <iostream>
#include <string>
using namespace std;

string zam(string s, int i){
    string s1(1, s[i]);
    if (i == s.size() - 1){
        return s1;
    } 

    return s1 + '*' + zam(s, i + 1); 
}
int main(){
    string s;
    cin >> s;
    
    cout << zam(s, 0) << '\n';
    return 0;
}