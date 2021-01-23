#include <iostream>
using namespace std;

int main(){
    const int s = 10000;
    int N;
    cin >> N;
    int a[s];
    
    for (int i=0; i<N; i++){
        cin >> a[i];
    }
    int max = a[0];
    for (int i=0; i<N; i++){
        if (a[i]>max){
            max=a[i];
        }
    }
    cout << max << '\n';
    return 0;
}
