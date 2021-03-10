#include <iostream>
using namespace std;

int main()
{
    int count = 0, max;

    for (int chislo = 27; chislo <= 900000; chislo *= 2){
        bool f = false;
        int chislo_first = chislo;
        while (chislo_first >= 10){
            int chislo_second = chislo / 10;
            while (chislo_second > 0){
                if (chislo_second == chislo_first % 10){
                    f = true;
                }
                chislo_second /= 10;
            }
            chislo_first /= 10;
        }
        
        if (!f){
            count++;
            max = chislo;
        }
    }
    
    cout << count << '\n' << max << '\n';
    return 0;
}
