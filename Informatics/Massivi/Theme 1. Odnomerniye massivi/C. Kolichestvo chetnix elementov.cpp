#include <iostream>
using namespace std;

int main(){
    const int s = 10000;
    int N,t=0;
    cin >> N;
    int a[s];
   
    for (int i=0; i<N; i++){
        cin >> a[i];
    }
    for (int i=0; i<N; i++){
        if (a[i]>0){
            t++;
        }
    }
    cout << t << '\n';
    return 0;
}