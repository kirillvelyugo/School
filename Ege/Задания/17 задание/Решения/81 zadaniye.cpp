#include <iostream>
using namespace std;

int main()
{
    int min = 0, max, count = 0;
    for (int chislo = 15; chislo <= 2000000; chislo *= 2){
        int chislo_2 = chislo;
        
        bool f = false;
        while (chislo_2 >= 10){
            int x = chislo_2 / 10;
            while (x > 0){
                if (x % 10 == chislo_2 % 10){
                    f = true;
                }
                x = x / 10;
            }
            chislo_2 /= 10;
        }
        
        if (f){
            count++;
            max = chislo;
            if (min == 0){
                min = chislo;
            }
        }
    }
    
    cout << count << '\n' << max - min << '\n';
    
    return 0;
}
