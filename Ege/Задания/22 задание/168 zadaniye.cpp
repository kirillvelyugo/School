#include <iostream>
using namespace std;

int main()
{
    for (int x = 0; x <= 10000; x++){
        int s = 5, i = x;
        while (i > 0){
            if (i % 8 > 4){
                s += i % 8;
            }else {
                s *= i % 8;
            }
            i /= 8;
        }
        if (s % 100 == 0 && s >= 100){
            cout << x;
            return 0;
        }
    }
    return 0;
}
