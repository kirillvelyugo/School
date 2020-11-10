#include <iostream>
#include <string>
using namespace std;

int main()
{
    int p;
    string s,s1,s2;
    getline (cin,s);
    
    p = s.find(" ");
    if (p != string::npos){
        s1 = s.substr(0,p);
        s2 = s.substr(p+1);
    }
    
    if ( s1 == "North" ){
        
        cout << 0 << ' ' << s2 << '\n';
    }else if ( s1 == "South" ){
        
        cout << 0 << ' ' << '-' << s2 << '\n';
    }else if( s1 == "East" ){
        
        cout << '-' << s2 << ' ' << 0 << '\n';
    }else if( s1 == "West" ){
        
        cout << s2 << ' ' << 0 << '\n';
    }

    return 0;
}