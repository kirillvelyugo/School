#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, sum=0;
    cin >> n;
    
    for ( int i=1; i<=n; i++) {
       int x;
       x = pow (x,2);
       sum+= i*i; 
        
    }
    cout << sum << '\n';
    
    return 0;
}
