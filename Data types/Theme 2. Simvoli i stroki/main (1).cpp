#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, temp;
    cin>> s;
    
    for (int i=0; i < s.size() ; i++){
        if (s[i]!='.'){
            temp += s[i];     
        }
        int x = atoi (temp.c_str());
        
        
    }
    cout << temp;
    return 0;
}

