#include <iostream>
using namespace std;

void f(int n){
    if(n > 2){
        f(n - 2);
        cout << n;
        f(n / 2);
    }
}

int main()
{
    f(9);


    return 0;
}
