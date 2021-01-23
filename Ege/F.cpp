#include <iostream>
using namespace std;

double pow(double a, int n){
    if (n > 0){
        return a*pow(a,n-1);
    }else {
        return 1;
    }
}
int main(){
    double a, res;
    int n;
    cin >> a >> n;
    
    
    if (n < 0){
        n = abs(n);
        res = 1/(pow(a,n));   
    }else{
        res = pow(a,n);
    }
    
    cout << res << '\n';
    return 0;
}
