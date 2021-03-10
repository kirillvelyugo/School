#include <iostream>
using namespace std;

int sumDvoich (int n){
    int sum = 0;
    while (n != 0){
        sum += n % 2;
        n /= 2;
    }
    return sum;
}

int main()
{
    int max, count = 0;
    for (int i = 31; i <= 2047; i++){
        if (i % 2 == 0 && i % 10 != 0 && sumDvoich(i) == 5){
            count++;
            max = i;
        }
    }

    cout << count << ' ' << max << endl;
    return 0;
}
