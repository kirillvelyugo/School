#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s(85, '9');

    while(s.find("666") != string::npos || s.find("999") != string::npos){
        if(s.find("666") != string::npos){
            int p = s.find("666");
            s.replace(p, 3, "9");
        }else{
            int p = s.find("999");
            s.replace(p, 3, "6");
        }
    }
    cout << s;

    return 0;
}
