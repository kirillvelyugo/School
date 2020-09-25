#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cin>>n;

    for (int i=0; i<n; i++){
        int x;
        cin>>x;
        sum = sum+x;
    }

    cout << sum << '\n';
    return 0;
}
