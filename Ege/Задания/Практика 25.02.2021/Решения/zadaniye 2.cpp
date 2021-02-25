#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string s = "1";
    string s1(33, '0');
    s += s1;
    
    while (s.find ("1") != string::npos || s.find ("100") != string::npos){
        if (s.find ("100") != string::npos){
            int p = s.find ("100");
            s.replace (p, 3, "0001");
        }
        else 
        {
            int p = s.find ("1");
            s.replace (p, 1, "00");
        }
    }
    
    int count = 0;
    for (int i = 0; i < s.size(); i++){
        count++;
    }
    
    cout << count << endl;
    return 0;
}
