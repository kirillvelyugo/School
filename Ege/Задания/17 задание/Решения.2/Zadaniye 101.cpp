#include <iostream>
using namespace std;

int main()
{
    int count = 0, max;
    for (int i = 98; i <= 998; i++){
        if (i % 10 == 9 && i % 18 != 0 && i % 8 == 1){
            count++;
            max = i;
        }
    }
    
    cout << count << ' ' << max << endl;
    return 0;
}
