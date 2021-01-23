#include <iostream>
using namespace std;

int main()
{
    double x, sum = 0;
    int c;
    
    cin >> x;
    
    while (x!=0){
        sum += x;
        c++;
        cin >> x;
    }
    cout << sum/c << '\n';
    return 0;
}
