#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int count = 0, x = 0, min;
    for (int i = -7018; i <= -3790; i++){
        if (i % 6 == 0 && i % 7 != 0 && i % 19 != 0 && abs(i) % 10 != 2){
            count++;
            if (x == 0){
                min = i;
                x++;
            }
        }
    }
    
    cout << count << ' ' << min;
    return 0;
}
