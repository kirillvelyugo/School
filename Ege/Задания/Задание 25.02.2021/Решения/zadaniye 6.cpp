#include <iostream>
using namespace std;

int f(int n){
    if (n <= 18){
        return n + 3;
    }
    if (n > 18 && n % 3 == 0){
        return (n / 3) * f(n / 3) + n - 12;
    }
    if (n > 18 && n % 3 != 0){
        return f(n - 1) + n * n + 5;
    }
}

int main ()
{
    int count = 0;
    for (int i = 1; i <= 800; i++){
        int rek = f(i);
        
        bool isChet = true;
        while (rek != 0){
            if ((rek % 10) % 2 != 0){
                isChet = false;
                break;
            }
            rek /= 10;
        }
        
        if (isChet){
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}
