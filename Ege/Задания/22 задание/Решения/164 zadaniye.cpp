#include <iostream>
using namespace std;

int main()
{
    for (int x = 1; x <= 10000; x++){
        int a = 0, b = 1, i = x;
        while (i > 0){
            if (i % 7 > 2){
                a += 1;
            }else {
                b *= i % 7;
            }
            i /= 7;
        }
        if (a == 3 && b == 4){
            cout << x;
            return 0;
        }
    }
    return 0;
}
