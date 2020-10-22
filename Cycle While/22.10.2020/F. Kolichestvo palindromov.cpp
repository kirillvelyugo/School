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
    int x,y,i;
    cin >> x;
    while (x>0){
        y=reverse(x);
        if (x==y){
            i++;
        }
        x--;
    }
    cout << i << '\n';
    return 0;
}
