#include <iostream>
using namespace std;

int main()
{
    int x, i=0, max;
    
    cin >> x ;
    max=x;
    
    while (x != 0){
        if (x==max){
            i++;
        } else if (x>max){
            max=x;
            i=1;
        }
        cin >> x;
    }
    cout << i << '\n';
    return 0;
}
