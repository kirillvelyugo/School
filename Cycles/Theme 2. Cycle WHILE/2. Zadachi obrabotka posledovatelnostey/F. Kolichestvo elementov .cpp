#include <iostream>
using namespace std;

int main()
{
    int x,y;
    int i=0;
    
    cin >> x; 
    y=x;
    
    while (x!=0){
        if (x>y){
            i++;
        }
        y=x;
        cin>>x;
    }
    
    cout << i << '\n';
    return 0;
}