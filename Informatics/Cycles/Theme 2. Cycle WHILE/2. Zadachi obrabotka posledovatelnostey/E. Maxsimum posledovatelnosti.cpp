#include <iostream>
using namespace std;

int main()
{
    int x,m=0;
    cin >> x; 
    while (x!=0){
        if (x>m){
            m=x;
        }
        cin >> x;
    }
    cout << m << '\n';
    return 0;
}
