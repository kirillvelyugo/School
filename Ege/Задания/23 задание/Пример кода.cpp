#include <iostream>
#include <vector>
using namespace std;

vector <int> elements;
int g(string s);
bool isInVector(int a);

void f(string s){ // построение строки с командами
    if (s.size() == 7){
        int a = g(s);
        if (!isInVector(a)){
            elements.push_back(a);
        }
        return;
    }
    f(s + '1');
    f(s + '2');
    f(s + '3');
}

bool isInVector (int a){
    for (int i = 0; i < elements.size(); i++){
        if (elements[i] == a){
            return true;
        }
    }
    return false;
}

int g (string s){ // принимает s из 7 команд и считает результат
    int a = 1; 
    for (int i = 0; i <= s.size(); i++){
        switch(s[i]){
            case '1':
                a++;
                break;
            case '2':
                a += 5;
                break;
            case '3':
                a *= 3;
                break;
        }
    }
    return a;
}

int main()
{
    f("");
    cout << elements.size();

    return 0;
}

/*
У исполнителя Калькулятор есть три команды, которым присвоены номера:
1. Прибавить 1
2. Прибавить 5
3. Умножить на 3
Сколько разных чисел может быть получено из числа 1 с помощью программ,
состоящих из 7 команд?
*/
