#include <iostream>
using namespace std;

int main()
{
    for (int i = 61; i <= 150; i++){
        string s(i, '1');
        while (s.find("111") != string::npos){
            if(s.find("111") != string::npos){
                int p = s.find("111");
                s.replace(p, 3, "2");
            }
            if(s.find("222") != string::npos){
                int p = s.find("222");
                s.replace(p, 3, "11");
            }
        }
        if(s == "2211"){
            cout << i;
            return 0;
        }
    }
    return 0;
}
