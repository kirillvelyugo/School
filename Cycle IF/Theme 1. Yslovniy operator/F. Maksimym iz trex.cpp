#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    
    if ((a>=b && b>=c) || (a>=c && c>=b)){
        cout << a << '\n';
    } else if ((b>=a && a>=c) || (b>=c && c>=a)){
        cout << b << '\n';
    } else {
        cout << c << '\n';
    }
    
    return 0;
}

