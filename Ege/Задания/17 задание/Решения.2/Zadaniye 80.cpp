#include <iostream>
#include <cmath>
using namespace std;

bool repeat(int n) {
    while (n != 0) {
        int last = n % 10;
        int tmpN = n / 10;
        while (tmpN != 0) {
            if (last == tmpN % 10) {
                return false;
            }
            tmpN /= 10;
        }
        n /= 10;
    }
    return true;
}
int main()
{
    int count = 0, max;
    for (int i = 27; i <= 900000; i *= 2) {
        if (repeat(i)) {
            count++;
            max = i;
        }
    }
    
    cout << count << ' ' << max << endl;
    return 0;
}

