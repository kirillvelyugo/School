#include <iostream>

using namespace std;

int sum = 0;
void f(int n){
    if (n > 2){
        sum += n;
        f(n - 3);
        f(n - 4);
    }
}
int main()
{
    f(10);
    cout << sum;
    return 0;
}
