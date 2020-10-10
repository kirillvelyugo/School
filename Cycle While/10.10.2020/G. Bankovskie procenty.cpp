#include <iostream>
using namespace std;

int main(){
    int x,y;
    double p;
    int i = 0;

    cin >>x>>p>>y;
    x =x*100;
    y =y*100;
    p=p/100;
    while (x<y){
        x= x+p*x;
        i++;
    }
    
    cout << i << '\n';
    return 0;
}