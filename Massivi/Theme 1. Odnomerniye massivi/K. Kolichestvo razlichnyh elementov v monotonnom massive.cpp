#include <iostream>
using namespace std;

int main(){
    const int s = 10000;
    int N, k=1,t=0;
    cin >> N;
    int a[s];
    
    for (int i=0; i<N; i++){
        cin >> a[i];
    }
    for (int i=1; i<N; i++){
        if (a[t]!=a[i]){
            k++;
            t=i;
        }
        
    }
    
    cout << k << '\n';
    return 0;
}