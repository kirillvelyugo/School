#include <iostream>
#include <string>
using namespace std;

char max(string s, int i){
    
    if (i == s.size() - 1){
        return s[i];
    }
    char x = max(s, i + 1);
    if (s[i] > x){
        return s[i];
    }else{
        return x;
    }
}
int main(){
    string s;
    cin >> s;
    cout << max(s, 0) << '\n';

    return 0;
}
