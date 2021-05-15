#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int count = 0, min = INT_MAX;
    for (int i = 22000; i <= 33000; i++){
        int c = 0;
        if (i % 11 == 0){
            c++;
        }
        if (i % 13 == 0){
            c++;
        }
        if (i % 17 == 0){
            c++;
        }
        if (i % 19 == 0){
            c++;
        }

        if (c == 2){
            count++;
            if (i < min){
                min = i;
            }
        }
    }

    cout << count << min;
    return 0;
}
