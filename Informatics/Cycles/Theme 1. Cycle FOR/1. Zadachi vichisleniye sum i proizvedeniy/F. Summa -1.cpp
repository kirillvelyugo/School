#include <iostream>
using namespace std;

int main()
{
    double n,sum=0;
    cin >> n;

    for (double i = 1; i <= n; i++) {
        sum += 1/(i*i);
        
    }
    cout << sum << '\n';

    return 0;
}