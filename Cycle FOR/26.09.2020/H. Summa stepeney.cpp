#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cin >> n;
    
    for (int i=0; i<=n; i++) {
        int x;
        x = pow (2,i);
        sum += x;
    }

    cout << sum << '\n';
    return 0;
}