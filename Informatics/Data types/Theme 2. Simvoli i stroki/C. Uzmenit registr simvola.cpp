#include <iostream>
using namespace std;

char izmreg (char c) {
    if (isupper(c)){
    return tolower(c);
    }else{
    return toupper(c);
    }
}

int main() {
    char c;
    cin >> c;
    cout << izmreg(c);
    
    return 0;
}