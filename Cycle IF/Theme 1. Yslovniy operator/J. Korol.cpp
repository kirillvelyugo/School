#include <iostream>
using namespace std;

int main () {
    
    int krlx, krly, x, y, dx, dy;
    cin >> krlx >> krly >> x >> y;
    dx = abs(krlx - x); 
    dy = abs(krly - y);
    
    if (dx <= 1 && dy <= 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    
    return 0;
}