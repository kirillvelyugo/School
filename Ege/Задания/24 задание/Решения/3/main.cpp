#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file ("24-s1.txt");
    int countString = 0;

    while (file){
        string s;
        file >> s;
        int count_k = 0, count_u = 0;

        for (int i = 0; i < s.size(); i++){
            if (s[i] == 'K'){
                count_k++;
            }
            if (s[i] == 'U'){
                count_u++;
            }
        }

        if (count_k > count_u){
            countString++;
        }
    }

    cout << countString << endl;
    return 0;
}
