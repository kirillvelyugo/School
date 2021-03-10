#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int count = 0, sum = 0;
    for (int i = 1389; i <= 9345; i++){
        if (i % 2 == 0 && i % 19 != 0){
            count++;
            sum += i;
        }
    }
    
    cout << count << ' ' << sum;
    return 0;
}
