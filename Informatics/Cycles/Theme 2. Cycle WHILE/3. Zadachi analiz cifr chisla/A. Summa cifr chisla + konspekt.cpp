#include <iostream>
using namespace std;

int SumOfDigits (int x){ // функция считающая сумму цифр в числе.
    int s=0;
    while (x != 0){
        s= s+x%10;
        x/=10;
    }
    return s; // прекращает выполнение функции и возвращает в качестве результата функции это значение.
}

int main()
{
    int x,s;
    cin >> x;
    s = SumOfDigits(x);
    cout << s << '\n';
    return 0;
}