#include <iostream>
#include <string>
using namespace std;

int main(){
    int i=0;
    string s;
    getline (cin,s);
    for (int c=0; c<s.size(); c++){
        if (s[c]==' '){
            i++;
        }
    }
    cout << i+1 << '\n';
    return 0;
}
