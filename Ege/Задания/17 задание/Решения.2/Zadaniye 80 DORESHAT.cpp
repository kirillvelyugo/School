#include <iostream>
#include <cmath>
using namespace std;

bool repeat (int n){
   bool isRepeat = false;
   
   return isRepeat;
}
int main()
{
    int count = 0, max;
    for (int i = 27; i <= 900000; i *= 2){
        if (repeat(i)){
            count++;
            max = i;
        }
    }
    cout << count << ' ' << max;
    return 0;
}
//11 27648
