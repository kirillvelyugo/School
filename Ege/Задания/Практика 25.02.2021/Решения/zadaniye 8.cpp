#include <iostream>
using namespace std;

int count_1 (int n){ // последний символ в 16-ой записи
    int ostat;
    while (n != 0){
        ostat = n % 16;
        n /= 16;
    }
    
    return ostat;
}

int main()
{
    int countNum = 0, max;
    for (int n = 100; n <= 1000000; n++){
        if ((n % 12 != 0) && (n % 16 == 10) && count_1(n) == 11){
            countNum++;
            max = n;
        }
 
    }
    
    cout << countNum << ' ' << max << endl;
    return 0;
}