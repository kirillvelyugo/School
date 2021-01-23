#include <iostream>
using namespace std;

int reverse(int n) {
    int y=0;
    while (n>0){
        y = y*10+n%10;
        n/=10;
    }
    return y;
}

int main(){
    int x;
    cin >> x;
    cout << reverse(x) << '\n';
    return 0;
}
