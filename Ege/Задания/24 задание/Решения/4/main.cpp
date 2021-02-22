#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file ("24-5.txt");
    string s;
    file >> s;

    int countSkob = 0;
    for (int i = 0; i <= s.size(); i++){
        if (s[i] == '('){
            countSkob++;
        }
        if (countSkob == 10000){
            cout << i + 1;
            return 0;
        }
    }

    return 0;
}
