#include <iostream>
using namespace std;

bool IsDigit(char c){
    if (c>='0' && c<='9'){
        return true;
    } else {
        return false;
    }
}
int main(){
    char s;
    int x;
    cin >> s;
    x=IsDigit(s);
    if (x==0){
        cout << "no" << '\n';
    } else {
        cout << "yes" << '\n';
    }
    return 0;
}
