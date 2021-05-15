#include <iostream>
using namespace std;

int main()
{
    int m[16] = {0};
    m[2] = 1;
    for (int i = 3; i <= 10; i++){
        if (i - 1 >= 2){
            m[i] += m[i - 1];
        }
        if (i - 2 >= 2){
            m[i] += m[i - 2];
        }
        if (i % 3 == 0 && i / 3 >= 2){
            m[i] += m[i / 3];
        }
    }

    for (int i = 11; i <= 13; i++){
        if (i - 1 >= 10){
            m[i] += m[i - 1];
        }
        if (i - 2 >= 10){
            m[i] += m[i - 2];
        }
        if (i % 3 == 0 && i / 3 >= 10){
            m[i] += m[i / 3];
        }
    }
    m[14] = 0;
    for (int i = 15; i <= 15; i++){
        if (i - 1 >= 10){
            m[i] += m[i - 1];
        }
        if (i - 2 >= 10){
            m[i] += m[i - 2];
        }
        if (i % 3 == 0 && i / 3 >= 10){
            m[i] += m[i / 3];
        }
    }
    cout << m[15];
    return 0;
}
