#include <iostream>
using namespace std;

int main(){
    int n,k,sumn=1,sumk=1,sumn_k=1,nk=0;
    cin >> n >> k;
    
    for (int i=1; i<=n; i++){
        sumn*=i;
    }
    for (int i=1; i<=k; i++){
        sumk*=i;
    }
    for (int i=1; i<=n-k; i++){
        sumn_k*=i;
    }
    
    nk=sumn/((sumk)*(sumn_k));
    cout << nk << '\n';
}

