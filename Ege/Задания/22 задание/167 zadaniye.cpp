#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100000; i++){
        int s = 1, a = 11, x = i;
        while (x / 7 > 0){
            if (x % 7 < 4){
                s += a;
            }else {
                s += x % 7;
            }
            x = x / 7;
        }
        if (s == 26){
            cout << i << '\n';
            return 0;
        }
    }
    return 0;
}
