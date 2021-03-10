#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int count = 0, min, x = 0;
    for (int i = 1031; i <= 125888; i++){
        if (i % 10 != 5 && i == int(sqrt(i)) * int(sqrt(i)) ){
            count++;
            if (i % 100 == 36){
                if (x == 0){
                    min = i;
                    x++;
                }
            }
        }
    }
    cout << count << ' ' << min;
    return 0;
}
