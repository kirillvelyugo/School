#include <iostream>
using namespace std;

bool isPrime(int n) {
    bool f = true;
    for (int i = 2; i * i < n; i++) {
        if (n % i == 0) {
            f = false;
            break;
        }
    }
    return f;
}

int main()
{

    int x = 1;
    for (int i = 2943444; i <= 2943529; i++) {
        if (isPrime(i)) {
            cout << x << ' ' << i << endl;
            x++;
        }
    }
    return 0;
}
