#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int count = 0, maxCount = 0;
    fstream file("k7-25.txt");
    string s;
    file >> s;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'C'){
            count++;
            if (maxCount < count){
                maxCount = count;
            }
        }else{
            count = 0;
        }
    }

    cout << maxCount;
    return 0;
}
