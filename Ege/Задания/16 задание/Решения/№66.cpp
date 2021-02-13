#include <iostream>
using namespace std;

int F (int n){
    if (n <= 15){
        return n * n + 11; 
    }
    if (n % 2 == 0 && n > 15){
        return F(n / 2) + n * n * n - 5 * n;
    }
    if (n % 2 != 0 && n > 15){
        return F(n - 1) + 2 * n + 3;
    }
}
int main(){
    int n, i = 0, k = 0;
    for (int n = 1; n <= 1000; n++){
        int x = F(n);
        int tmp;
        while (x > 0){
            tmp = x % 10;
            x /= 10;
            if (tmp == 6){
                i++;
            }
        } 
        if (i >= 3){
                k++;
        }
        i = 0;
    }
     
    cout << k << '\n';
    return 0;
}
