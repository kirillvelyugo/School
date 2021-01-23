#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string sup(int n){
    int k=0;
    for (int i=1; i<=sqrt(n); i++){
        if (n%i==0){
            k++;
            if (k>2){
                return "composite";    
            }
        }
    }
    if (k==2){
        return "prime";
    }
}

int main(){
    int n;
    cin >> n;
    cout << sup(n) << '\n';
    return 0;
}
