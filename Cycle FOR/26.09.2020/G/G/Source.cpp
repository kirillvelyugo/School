#include <iostream>
using namespace std;

int main()
{
    double n, sum = 1;
    int a = -1;
    cin >> n;

    for (double i = 1; i <= n; i++) {
        sum += a / (2 * i + 1);
        a = -a;

    }
    cout << 4*sum << '\n';

    return 0;
}