
#include <iostream>
using namespace std;

int main()
{
    int n,i=1;
    cin >> n;
    
    while (i*i<=n){
        cout << i*i << '\n';
        i++;
    }
    
    return 0;
}
