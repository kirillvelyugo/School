#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    for (int i=0; i<s.size(); i++){
        for (int c=1; c<s.size(); c++){
            if (s[i]==s[c] && i!=c){
                cout << s[i] << '\n';
                return 0;
            }    
        }
    }
    
    
    
    return 0;
}
