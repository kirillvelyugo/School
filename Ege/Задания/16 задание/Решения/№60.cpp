#include <iostream>
using namespace std;

int f(int n){
    if (n > 25){
        return n * n + 4 * n + 3;
    }
    if (n <= 25 && n % 3 == 0){
        return f(n + 1) + 2 * f(n + 4);
    } 
    if (n <= 25 && n % 3 != 0){
        return f(n + 2) + 3 * f(n + 5);
    } 
}
int main (){
    int i = 0;
    for (int n = 1; n <= 1000; n++){
        int sum = 0;
        int x = f(n);
        while (x != 0){
            sum += x % 10;
            x /= 10;
        } 
        if (sum == 24){
            i++;
        }
    }
    
    cout << i << '\n';
    return 0;
}
