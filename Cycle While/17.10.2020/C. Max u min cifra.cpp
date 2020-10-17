#include <iostream>
#include <algorithm>
using namespace std;

int MinDigit  (int x){ 
    int m = 10;
    while(x!=0){
        m = min(x%10,m);
        x/=10;
    }
    return m;
}
int MaxDigit  (int x){ 
    int m = 0;
    while(x!=0){
        m = max(x%10,m);
        x/=10;
    }
    return m;
}
int main()
{
    int x;
    cin >> x;
    cout << MinDigit(x) << ' ' ;
    cout << MaxDigit(x) << '\n';
}