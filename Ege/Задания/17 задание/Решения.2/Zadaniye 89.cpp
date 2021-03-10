#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int count = 0, max;
    for (int i = 1234567; i <= 7654321; i++){
        int mlad = i % 100, star = i / 100000;
        if (abs(mlad - star) != 0 && i % abs(mlad - star) == 0){
            count++; 
            max = i;
        }
    }
    
    cout << count << ' ' << max;
    return 0;
}
