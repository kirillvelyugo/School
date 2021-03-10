#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int count = 0, min, x = 0;
    for (int i = 980; i <= 5320; i++){
        if ((i % 4 == 0 || i % 5 == 0) && i % 11 != 0 && i % 17 != 0 && i % 19 != 0 && i % 23 != 0){
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
