#include <iostream>
using namespace std;

int main(){
    const int s = 10000;
    int N, r, k, i=0;
    cin >> N;
    int a[s];
    
    for (int i=0; i<N; i++){
        cin >> a[i];
    }
    
    cin >> r;

    while (r<=a[i]){
        i++;
    }    
    
    cout << i+1 << '\n';
    return 0;
}