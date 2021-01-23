#include <iostream>
using namespace std;

int main(){
    const int s = 10000;
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int x[s];
    
    for (int i=0; i<n; i++){
        x[i]=i+1;
    }
    for (int i=0; i<(b-a+1)/2; i++){
        swap(x[a+i-1], x[b-i-1]);
    }
    for (int i=0; i<(d-c+1)/2; i++){
        swap(x [c+i-1], x[d-i-1]);
    }
    for (int i=0; i<n; i++){
        cout << x[i] << ' ';
    }

    return 0;
}