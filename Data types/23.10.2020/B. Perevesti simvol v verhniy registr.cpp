#include <iostream>
using namespace std;

unsigned char ToUpper(unsigned char c){
    if (c >='a' && c<='z'){
        return c + 'A' -'a';
    }else {
        return c;
    }
}
int main(){
    unsigned char s;
    cin >> s;
    cout << ToUpper(s) << '\n';
    return 0;
}
