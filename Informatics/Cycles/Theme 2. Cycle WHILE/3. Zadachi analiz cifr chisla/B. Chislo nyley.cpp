#include <iostream>
using namespace std;

int NumberOfZeroes (int x){ 
    int i=0;
    while (x != 0){
        if (x%10==0){
            i++;
        }
        x/=10;
    }
    return i; 
}

int main()
{
    int x,s;
    cin >> x;
    s = NumberOfZeroes(x);
    cout << s << '\n';
    return 0;
}