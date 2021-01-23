#include <iostream>
using namespace std;

double power (double a, int n){
    double m=1;
    for (int i=0; i<n; i++){
        m*=a;
    }
    return m;
}

int main(){
    double a; 
    int n;
    cin >> a >> n;
    cout << power(a,n) << '\n';

    return 0;
}