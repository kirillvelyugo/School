#include <iostream>
#include <string>
using namespace std;

int col(string s, int i){
    if (i == s.size() - 1){
        return isdigit(s[i])? 1:0;
    }
    return isdigit(s[i])? 1 + col(s, i + 1):col(s, i + 1);
}
int main(){
    string s;
    cin >> s;
    cout << col(s, 0) << '\n';
    
    return 0;
}
