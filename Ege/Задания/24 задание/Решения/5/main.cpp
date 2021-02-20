#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file ("24-3.txt");
    string s;
    file >> s;

    int countPod = 0, max = 0;
    for (int i = 0; i < s.size(); i++){
            if (s[i] < s[i + 1]){
                countPod++;
            }else {
                countPod = 0;
            }
            if (max < countPod){
                max = countPod;
            }
    }

    cout << max + 1;
    return 0;
}
