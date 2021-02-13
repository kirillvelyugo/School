#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file("24-153.txt");
    string s;
    int countP = 0;
    file >> s;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'A'){
            for (int n = i; n < i + 10 && n < s.size(); n++){
                if (s[n] == 'F'){
                    int raz = n - i + 1;
                    if (raz >= 7 && raz <= 10){
                        countP++;
                    }
                }
            }
        }
    }

    cout << countP << endl;
    return 0;
}
