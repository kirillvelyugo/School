#include <iostream>
using namespace std;

int min (int a, int b, int c, int d){
    int m=a;
    if (b<m){
        m=b;
    }
    if (c<m){
        m=c;
    }
    if (d<m){
        m=d;
    }
    return m;
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << min (a,b,c,d) << '\n';

    return 0;
}
