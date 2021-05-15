#include <iostream>

using namespace std;

int main()
{
    int m[45] = {0};
    m[2] = 1;
    for (int i = 3; i <= 13; i++){
        if (i - 1 >= 2){
            m[i] += m[i - 1];
        }
        if (i % 2 == 0 && i / 2 >= 2){
            m[i] += m[i / 2];
        }
        if (i % 3 == 0 && i / 3 >= 2){
            m[i] += m[i / 3];
        }
    }
    for (int i = 14; i <= 28; i++){
        if (i - 1 >= 13){
            m[i] += m[i - 1];
        }
        if (i % 2 == 0 && i / 2 >= 13){
            m[i] += m[i / 2];
        }
        if (i % 3 == 0 && i / 3 >= 13){
            m[i] += m[i / 3];
        }
    }
    m[29] = 0;
    for (int i = 30; i <= 44; i++){
        if (i - 1 >= 13){
            m[i] += m[i - 1];
        }
        if (i % 2 == 0 && i / 2 >= 13){
            m[i] += m[i / 2];
        }
        if (i % 3 == 0 && i / 3 >= 13){
            m[i] += m[i / 3];
        }
    }

    cout << m[44];
    return 0;
}
