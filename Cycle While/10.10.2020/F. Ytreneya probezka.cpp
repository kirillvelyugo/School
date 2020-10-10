#include <iostream>
using namespace std;

int main()
{
    double x,y;
    int i=1; 
    cin >> x >> y;
    
    while (x<y){
        x=1.1*x;
        i++;
    }
    
    cout << i << '\n';
    
    return 0;
} 