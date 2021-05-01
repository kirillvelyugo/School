#include <iostream>
using namespace std;

int count_1 (int n){ // подсчет единиц в двоичной записи 
    int count = 0;
    
    while (n != 0){
        int ostat = 0;
        ostat = n % 2;
        if (ostat == 1){
            count++;
        }
        n /= 2;
    }
    
    return count;
}

int main()
{
    int countNum = 0, max;
    for (int n = 64; n <= 1024; n++){

        if ((n % 2 == 0) && (n % 8 == 0 && n % 5 != 0) && count_1(n) == 3){
            countNum++;
            max = n;
        }
        
    }
    
    cout << countNum << ' ' << max << endl;
    return 0;
}