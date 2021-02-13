#include <iostream>
using namespace std;

int main(){
    
    int sum = 0, count = 0;
    int a[4] = {7, 13, 17, 19};
    
    for (int chislo = 25000; chislo <= 35000; chislo++){
        int count_del = 0;
        for (int masiv = 0; masiv < 4; masiv++){
            if (chislo % a[masiv] == 0){
                count_del++;
            }   
        }
        if (count_del == 2){
            count++;
            int x = chislo;
            while (x > 0){
                sum += x % 10;
                x /= 10;
            }
        }
    }

    cout << count << '\n' << sum;
    return 0;
}