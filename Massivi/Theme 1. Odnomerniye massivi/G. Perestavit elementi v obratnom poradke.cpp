#include <iostream>
using namespace std;

int main(){
    const int s = 10000;
    int N, temp;
    cin >> N;
    int a[s];
    
    for (int i=0; i<N; i++){
        cin >> a[i];
    }
    for (int c=0; c<(N/2); c++){
        swap(a[c], a[N-1-c]);

    }
    for (int i=0; i<N; i++){
        cout << a[i] << ' ';
    }

    return 0;
