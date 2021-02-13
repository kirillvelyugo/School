#include <iostream>
using namespace std;

int f(int n){
    if (n <= 15){
        return 2 * n * n + 4 * n + 3;
    } 
    if (n > 15 && n % 3 == 0){
        return f(n - 1) + n * n + 3;
    }
    if (n > 15 && n % 3 != 0){
        return f(n - 2) + n - 6;
    }
}
int main (){
    int n, i = 0, k = 0;
    for (int n = 1; n <= 1000; n++){
        int x = f(n);
        while (x != 0){
            int tmp = x % 10;
            x /= 10;
            if (tmp % 2 != 0){
                i++;
            }else{
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
