#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    if (k > m * n) {
        cout << "NO" << endl;
    return 0;
    }

    if (k % n == 0 && k / n <= m) {
        cout << "YES" << '\n';
    return 0;
    }
    if (k % m == 0 && k / m <= n) {
        cout << "YES" << '\n';
    return 0;
    }else {
        cout << "NO" << '\n';
    }
}