#include <iostream>
using namespace std;

int main()
{
    for (int x = 51; x <= 1000; x++){
        int i = x, s = 0;
        while (i > 0){
            if (i % 2 > 0){
                s = s + i % 7;
            }else {
                s = s - i % 7;
            }
            i = i / 7;
        }
        if (s == 1){
            cout << x;
            return 0;
        }
    }

    return 0;
}
