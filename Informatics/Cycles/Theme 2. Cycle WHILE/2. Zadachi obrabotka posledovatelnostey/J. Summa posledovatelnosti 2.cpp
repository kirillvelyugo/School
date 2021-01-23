#include <iostream>
using namespace std;

int main()
{
    int x,y=1;
    int sum=0;
    cin >> x;
    
    while (x >= 0){
       sum+=x;
       if (x==0 && y==0){
           break;
       }
       y=x;
       cin >> x;
       
    }
    cout << sum << '\n';
    return 0;
}
