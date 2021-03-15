#include <iostream>
using namespace std;

void fill(int n);
void remove(int n);

void fill(int n) {
    if (n == 1) {
        cout << 1 << ' ';
        return;
    }
    if (n >= 2) {
        fill(n - 1);
        cout << n << ' ';
        remove(n - 1);
    }
}

void remove(int n) {
    if (n == 1) {
        cout << -1 << ' ';
        return;
    }
    if (n >= 2) {
        fill(n - 1);
        cout << -n << ' ';
        remove(n - 1);
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
        fill(i);
    return 0;
}
