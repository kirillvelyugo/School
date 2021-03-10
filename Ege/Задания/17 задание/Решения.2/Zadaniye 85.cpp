#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int del[4] = {7, 11, 17, 19};
    int count = 0, max;
    
    for (int i = 15000; i <= 25000; i++){
        int countDel = 0;
        for (int d: del){
            if ( i % d == 0){
                countDel++;
            }
        }
        if (countDel == 2){
            count++;
            max = i;
        }
    }
    
    cout << count << ' ' << max;
    return 0;
}
