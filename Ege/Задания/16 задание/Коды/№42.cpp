#include <iostream>
using namespace std;

int f(int n);
int g(int n);

int g(int n){
    if (n > 1){
        return f(n - 1) - 2 * g(n - 1);
    }
    if (n == 1){
        return 1;
    }
}
int f(int n){
    if (n > 1){
        return f(n - 1) + 3 * g(n - 1); 
    }
    if (n == 1){
        return 1;
    }
}

int main (){
    int n = 18, x = f(n);
    int sum = 0; 
    while (x != 0){
        sum += x % 10;
        x /= 10;
    }
    cout << sum << '\n';
    return 0;
}
