#include <iostream>

using namespace std;

int main()
{
    string s, s1(100, '9');
    s = "2" + s1;

    while (s.find("19") != string::npos || s.find("299") != string::npos || s.find("3999") != string::npos){
        if(s.find("19") != string::npos){
           int p = s.find("19");
           s.replace(p, 2, "2");
        }
        if(s.find("299") != string::npos){
           int p = s.find("299");
           s.replace(p, 3, "3");
        }
        if(s.find("3999") != string::npos){
           int p = s.find("3999");
           s.replace(p, 4, "1");
        }
    }

    cout << s;

    return 0;
}
