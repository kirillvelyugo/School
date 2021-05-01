#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string t = "DBAC", s;
    fstream file ("k7b-2.txt");
    file >> s;
    int lenght = 0, maxLenght = 0;

    int j = 0, x = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == t[j]){
            lenght++;
            if (lenght > maxLenght){
                maxLenght = lenght;
            }
            j = (j + 1) % 4;
            x = 0;
        }else{
            if (x == 0){
                j = 0;
                x++;
                i--;
            }
            lenght = 0;
        }
    }

    cout << maxLenght;
    return 0;
}
