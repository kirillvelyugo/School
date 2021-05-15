#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 10000; i++){
        int x = i, a = 0, b = 1;
        while (x > 0){
            a = a + 1;
            b = b * (x % 10);
            x = x / 10;
        }
        if (a == 2 && b == 72){
            cout << i;
            return 0;
        }
    }
    return 0;
}
