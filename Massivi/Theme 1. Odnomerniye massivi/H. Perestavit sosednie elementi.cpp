#include <iostream>
using namespace std;

int main(){
    const int s = 10000;
    int N,r;
    cin >> N;
    int a[s];
    r=N;
    if (r%2==1){
        r--;
    }
        
    for (int i=0; i<N; i++){
        cin >> a[i];
    }
    for (int c=0; c<r; c+=2){
        swap(a[c], a[c+1]);
        
    }
    for (int i=0; i<N; i++){
        cout << a[i] << ' ';
    }
    

    return 0;
}