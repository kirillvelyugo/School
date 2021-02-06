#include <iostream>
using namespace std;

int main()
{
    int answ;
    for (int x = 0; x <= 10000; x++){
        int k = x - 1, p = 100, s = 340;
        while (p < s){
            k = k + 1;
            s = s - 2 * k;
            p = p + k;
        }
        k = k - x;
        if (k == 5){
            answ = x;
        }
    }
    cout << answ;
    return 0;
}
