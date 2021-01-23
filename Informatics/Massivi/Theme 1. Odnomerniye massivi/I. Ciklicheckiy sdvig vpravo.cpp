#include <iostream>
using namespace std;

int main(){
    const int s = 10000;
    int N,temp;
    cin >> N;
    int a[s];
    
    for (int i=0; i<N; i++){
        cin >> a[i];
    }
    temp = a[N-1];
    for (int i=0; i<N; i++){
        a[N-1-i]=a[N-2-i];
    }
    a[0]=temp;
    for (int i=0; i<N; i++){
        cout << a[i] << ' ';
    }
    return 0;
}
