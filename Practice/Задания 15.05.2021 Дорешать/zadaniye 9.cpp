#include <iostream>
using namespace std;

int main()
{
    for (int i = 10000; i >= 0; i--){
        int x = i, m = 0, l = 0;
        while(x > 0){
            l = l + 1;
            if (x % 2 == 0){
                m = m + (x % 10);
            }
            x = x / 10;
        }
        if (l == 3 && m == 8){
            cout << i;
            return 0;
        }
    }
    return 0;
}
