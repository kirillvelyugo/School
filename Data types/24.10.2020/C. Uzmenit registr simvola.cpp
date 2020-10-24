#include <iostream>
using namespace std;


char izmreg (char c){
    if (c >='a' && c<='z'){
        return c + 'A' -'a';
    }else if (c >='A' && c<='Z'){
        return c + 'a' - 'A' ;
    }
}

int main(){
    char n;
    cin >> n;
    cout << izmreg(n) << '\n';

    return 0;
}
