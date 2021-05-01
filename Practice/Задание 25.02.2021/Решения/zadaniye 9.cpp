#include <iostream>
using namespace std;

int main()
{
    int sum = 0, countNum = 0;
    
    for (int n = 697; n <= 3458; n++){
        if (n % 16 == 14 &&  n % 7 == n % 8){
            sum += n;
            countNum++;
        }
    }
    
    cout << sum << ' ' << countNum << endl;
    return 0;
}