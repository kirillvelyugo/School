#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n;
    cin >> n;
    vector <int> f(n + 1, 0);
    f[1] = 1;
    for (int i = 2; i<= n; i++){
        if (i - 3 >= 1){
            f[i] += f[i - 3];
        }
        if (i - 5 >= 1){
            f[i] += f[i - 5];
        }
    }
    if (f[n] != 0){
        cout << "YES" << '\n';
    }else{
        cout << "NO" << '\n';
    }
    return 0;
}