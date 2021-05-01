#include <iostream>
#include <fstream>
using namespace std;

int main (){
    int count = 0, maxCount = 0;
    fstream file("k7a-2.txt");
    string s;
    file >> s;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'A' || s[i] == 'C' || s[i] == 'D'){
            count++;
            if(count > maxCount){
                maxCount = count;
            }
        }else{
            count = 0;
        }
    }

    cout << maxCount;
    return 0;
}
