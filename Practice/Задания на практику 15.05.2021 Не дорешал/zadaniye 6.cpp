#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int count = 0, max = INT_MIN;
    for (int i = 8812; i <= 12285; i++){
        if ((i % 8 == 0 || i % 19 == 0) && i % 4 != 0 && i % 9 != 0 && i % 14 != 0 && i % 16 != 0 ){
            count++;
            if (i > max){
                max = i;
            }
        }
    }

    cout << count << max;
    return 0;
}
