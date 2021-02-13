#include <iostream>
using namespace std;

int f(int n){
    if (n <= 18){
        return n + 3;
    }
    if (n % 3 == 0 && n > 18){
        return (n / 3) * f(n / 3) + n - 12;
    }
    if (n > 18 && n % 3 != 0){
        return f(n - 1) + n * n + 5;
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
            if (tmp % 2 == 0){
                i++;
            }else {
                i = 0;
                break;
            }
        } 
        if (i > 0){
            k++;
        }
        i = 0;
    }
     
    cout << k << '\n';

    return 0;
}
