#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;
    cin >> number;
    
    while (number != 0){
        sum += number % 10;
        number /= 10;
    }

    cout << sum << endl;
    return 0;
}
