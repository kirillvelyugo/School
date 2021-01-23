#include <iostream>
using namespace std;

int main()
{
    int x;
    int i;
    cin >> x;
    
    while (x!=0){
        
        if (x%2 == 0){
            i++;
        }
        
        cin >> x ;
    }
    cout << i << '\n';
    return 0;
}
