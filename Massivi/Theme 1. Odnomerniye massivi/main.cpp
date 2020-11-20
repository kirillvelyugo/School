#include <iostream>
using namespace std;

int main(){
    const int s = 10000;
    int N, temp;
    cin >> N;
    int a[s];
    temp = a[N];
    for (int i=0; i<N; i++){
        cin >> a[i];
    }
    for (int c=0; c<N; c+=2){
        swap(a[c], a[c+1]);

    }
    if (N%2!=0){
            a[N]=temp;
    }
    for (int i=0; i<N; i++){
        cout << a[i] << ' ';
    }
    

    return 0;
}