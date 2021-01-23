#include <iostream>
using namespace std;

int main()
{
    int n,k=0,s=1;
    cin >> n;
    
    while ( s<n ){
        s*=2;
        k++;
    }
    
    
    cout << k << '\n'; 
    
    return 0;
} 