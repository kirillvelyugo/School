#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> f (14, 0);
    f[2] = 1;
    for (int i = 3; i<= 13; i++){
        if (i != 6){
            if (i - 1 >= 2){
                f[i] += f[i - 1];
            }
            if (i - 2 >= 2){
                f[i] += f[i - 2];
            }
            if (i - 4 >= 2){
                f[i] += f[i - 4];
            }
        }
    }
    
    cout << f[13] << '\n';
    return 0;
}

/*  Исполнитель Июнь17 преобразует число на экране. У исполнителя есть три команды, которым 
присвоены номера: 
1. Прибавить 1 
2. Прибавить 2 
3. Прибавить 4 
Сколько существует программ, для которых при исходном числе 2 результатом является число 13 и при 
этом траектория вычислений не содержит число 6?  */
