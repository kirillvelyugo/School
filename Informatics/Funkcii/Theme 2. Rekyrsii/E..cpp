#include <iostream>
#include <string>
using namespace std;

string skob (string s, int i) 
{
    string s1(1, s[i]);
    if (i == s.size()){
        return "";
    }  
    if (i == s.size() / 2){
        return s1 + skob(s, i + 1);
    }else{
        if (s.size() % 2 == 0 && i == s.size() / 2 - 1){
            return s1 + skob(s, i + 1);
        }
    }
    if (i < s.size() / 2 ){
        return (s1 + "(") + skob(s, i + 1);
    }
    if (i > s.size() / 2){
        return (")" + s1) + skob(s, i + 1);
    }
    if (i == s.size()){
        return "";
    }
}

int main()
{
    string s;
    cin >> s;
    
    cout << skob(s, 0) << '\n';

    return 0;
}




