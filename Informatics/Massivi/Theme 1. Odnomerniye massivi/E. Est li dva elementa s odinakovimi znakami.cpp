#include <iostream>
using namespace std;

int main()
{
    const int len = 10000;
    int N;
    cin >> N;
    int a[len];
    
    for (int i=0; i<N; i++){
        cin >> a[i];
    }
    for (int i=1; i<N; i++){
        if (a[i-1]>0 && a[i]>0 || a[i-1 ]<0 && a[i]<0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    
    return 0;
}