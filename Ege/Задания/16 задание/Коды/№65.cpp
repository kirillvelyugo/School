#include <iostream>
using namespace std;

int f(int n){
    if (n <= 15){
        return n + 15;
    }
    if (n % 2 == 0 && n > 5){
        return f(n/2) + n * n * n - 1;
    }
    if (n % 2 != 0 && n > 5){
        return f(n - 1) + 2 * n * n + 1;
    }
}
int main()
{
    int n, i = 0, k = 0;
    for (int n = 1; n <= 1000; n++){
        int x = f(n);
        int tmp;
        while (x > 0){
            tmp = x % 10;
            x /= 10;
            if (tmp == 8){
                i++;
            }
        } 
        if (i >= 2){
                k++;
        }
        i = 0;
    }
     
    cout << k << '\n';

    return 0;
}
