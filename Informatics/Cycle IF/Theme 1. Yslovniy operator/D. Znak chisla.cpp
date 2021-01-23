#include <iostream>
using namespace std;

int main() {
    float a;
    cin >> a;
    
    if (a > 0 ){
        cout << "1" << '\n';
    } else if ( a < 0 ) {
        cout << "-1" << '\n';
    } else {
        cout << "0" << '\n';
    }
    

    return 0;
}

