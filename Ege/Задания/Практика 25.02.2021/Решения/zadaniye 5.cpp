#include <iostream>
using namespace std;

int f(int n){
    if (n <= 70){
        return f(n + 2) + 2 * f(3 * n);
    }
    if (n > 50){
        return n - 50;
    }
}
int main()
{
    cout << f(40) << endl;

    return 0;
}
