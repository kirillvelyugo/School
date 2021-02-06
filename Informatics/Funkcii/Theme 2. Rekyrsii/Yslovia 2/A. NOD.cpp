#include <iostream>
#include <algorithm>
using namespace std;

int nod(int x, int y){
    if (x == 0 || y == 0){
        return x + y;
    }
    if (x > y){
        return nod(x % y, y);
    }else {
        return nod(x, y % x);
    }
    
}

int main()
{
    int x, y;
    cin >> x >> y;
    
    cout << nod(x, y) << endl;
    return 0;
}