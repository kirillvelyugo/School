#include <iostream>
using namespace std;

int main()
{
    int s = 0, x;
    for (int i = 1234567; i <= 7654321; i++){
        int st, ml, rz;
        ml = i % 100;
        st = i / 100000;
        
        rz = abs(st - ml);
        
        if (rz != 0 && i % rz == 0){
            s++;
            x = i;
        }
    }
    
    cout << '\n' << s << '\n' << x;

    return 0;
}
