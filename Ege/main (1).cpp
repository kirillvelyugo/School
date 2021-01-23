#include <iostream>
using namespace std;
double power(double x, int y)
{
    double temp;
    if (y == 0)
        return 1;
    temp = power (x, y / 2);
    if ((y % 2) == 0) {
        return temp * temp;
    } else {
        if (y > 0)
            return x * temp * temp;
        else
            return (temp * temp) / x;
    }
}

int main(){
    double x, res;
    int y;
    cin >> x >> y;
    res = power(x,y);
    
    cout << res << '\n';
    return 0;
}
