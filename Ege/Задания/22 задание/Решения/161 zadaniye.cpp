#include <iostream>
using namespace std;

int main()
{
    int answ;
    for (long x = 0; x <= 10000; x++){
        long l = 1, m = 0, i = x;
        while (i > 0){
            if (m < l){
                m += 1;
            }else {
                l += m;
            }
            i /= 6;
        }
        if (l == 4 && m == 2){
            answ = x;
        }
    }
    cout << answ;
    return 0;
}
