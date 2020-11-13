#include <iostream>
using namespace std;

int main()
{
    int m1=0,m2=0, x;
    
    cin >> x;
    
    while (x!=0){
        if (x>m1){
            m2=m1;
            m1=x;
        }else if (x <= m1 && x > m2){
            m2=x;
        }
        cin >> x;
    }
    cout << m2 << '\n';
    
    return 0;
}