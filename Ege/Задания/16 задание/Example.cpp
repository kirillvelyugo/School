#include <iostream>
#include <vector>
using namespace std;

vector<int> memory(51, 2147483647); // INT_MAX - самое больше число в типе int

int f(int n){
    if (n >= 0 && n <= 50 && memory[n] != 2147483647){
        return memory[n];
    }else{
        if (n == 0){
            memory[n] = 1;
            return 1;
        }
        if (n > 0){
            memory[n] = 2 * f(1 - n) + 3 * f(n - 1) + 2;
            return 2 * f(1 - n) + 3 * f(n - 1) + 2;
        }
        if (n < 0){
            return -f(-n);
        }
    }
}

int main()
{
    int num = f(50);    
    int sum = 0;
    while (num != 0){
        sum += num % 10;
        num /= 10;
    }
    
    cout << sum << endl;
    return 0;
}

/*
(Е. Джобс) Алгоритм вычисления значения функции F(n), где n – натуральное
число, задан следующими соотношениями:
F(n) = 1 при n = 0
F(n) = 2·F(1-n) + 3·F(n-1) + 2, если n > 0,
F(n) = - F(-n), если n < 0.
Чему равна сумма цифр значения F(50)?
*/