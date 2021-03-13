#include <iostream>
#include <vector>
using namespace std;

vector < vector <int> > m;
 
// Функция создание спиральки
void spiral(int dlina, int x, int y, int chislo) {
    
    // цикл заполнения строчки вправо
    int track = 1;
    while (track < dlina && m[x + 1][y] == 0) {
        m[x][y] = chislo;
        x++;
        chislo++;
        track++;
    }

    // цикл заполнения строчки вниз
    track = 1;
    while (track < dlina && m[x][y + 1] == 0) {
        m[x][y] = chislo;
        y++;
        chislo++;
        track++;
    }

    // цикл заполнения строчки   
    track = 1;
    while (track < dlina && m[x - 1][y] == 0) {
        m[x][y] = chislo;
        x--;
        chislo++;
        track++;
    }

    // цикл заполнения строчки вверх
    track = 1;
    while (track < dlina && m[x][y - 1] == 0) {
        m[x][y] = chislo;
        y--;
        chislo++;
        track++;
    }
    m[x][y] = chislo;
    chislo++;

    // условия выхода из функции

    if (dlina == 2 || dlina == 1) {
        return;
    }
    if (m[x][y] != 0 && m[x + 1][y] != 0 && m[x - 1][y] != 0 && m[x][y + 1] != 0 && m[x][y - 1] != 0) { // ситуации с 3...10
      return;
    }


    // вызов функции для дальнейшего заполнения вектора
    spiral(dlina - 2, x + 1, y, chislo);
}

// Функция генерации вектора 
void generation(int dlina) {
    for (int i = 0; i < dlina; i++) {
        vector <int> v(dlina, 0);
        m.push_back(v);
    }
}

// Функция вывода вектора
void write(int dlina) {
    for (int y = 0; y < dlina; y++) {
        for (int x = 0; x < dlina; x++) {
            cout << m[x][y] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int dlina;
    cin >> dlina;

    generation(dlina);
    spiral(dlina, 0, 0, 1);
    write(dlina);

    return 0;
}