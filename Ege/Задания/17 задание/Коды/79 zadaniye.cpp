#include <iostream>
using namespace std;

int main()
{
    int count = 0, max;
    for (int chislo = 2095; chislo <= 19402; chislo++){
        int count_del = 0;
        for (int del = 1; del <= chislo; del++){
            if (chislo % del == 0){
                count_del++;
            }
        }
        if (count_del == 2){
            int chislo_first = chislo, chislo_second = chislo % 10;
            while (chislo_first >= 10){
                chislo_first /= 10;
            }
            if (chislo_first > chislo_second){
                count++;
                if (chislo % 100 == 21){
                    max = chislo;
                }
            }
        }
    }
    
    cout << count << '\n' << max << '\n';
    return 0;
}