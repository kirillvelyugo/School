#include <string>
#include <iostream>

#include <string>
#include <iostream>

using namespace std;

int main() {
    string str,str1;
    getline(cin, str);
    
    str1 = ' ';
    str = str+str1;
    int max = 0, tmpLen = 0;
    string maxStr, tmp;
    
    if (str[0] == ' ' ){
        str.erase(0,1);
    }
    
    
    
    for (int i =0; i < str.size(); i++) {
        if (str[i] == ' ') {
            if (tmpLen > max) {
                max = tmpLen;
                maxStr = tmp;
            }
            tmpLen = 0;
            tmp = "";
        } else {
            tmpLen++;
            tmp += str[i];
        }
    }
    
    cout << maxStr << endl << max << endl;
    
    return 0;
}