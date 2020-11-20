#include <iostream>
using namespace std;

int main()
{
    const int s = 10000;
    int N, c=0;
    cin >> N;
    int a[s];
    
    for (int i=0; i<N; i++){
        cin >> a[i];
    }
    for (int i=1; i<N-1; i++){
        if (a[i-1]<a[i]&&a[i+1]<a[i]){
            c++;
        }
    }
    cout << c;
    return 0;
}