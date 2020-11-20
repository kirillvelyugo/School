#include <iostream>
#include <string>
using namespace std;

int main(){
    int x,c;
    char f = '.';
    string s, temp;
    cin>> s;
    s = s+f;
    
    if (s[0]=='.'){
        cout << 0 << '\n';
        return 0;
    }
    for (int i=0; i < s.size() ; i++){
        if (s[i]!='.'){
            temp += s[i];     
        }
        
        if ((s[i]=='.') && (s[i+1]!='.')){
            x = atoi (temp.c_str());
            c++;
            if (x<=255){
                temp = "";
            }else if (x>255){
                cout << "0" << '\n'; 
                return 0;
            }
            
        }else if ((s[i]=='.') && (s[i+1]=='.')){
            cout << "0" << '\n';
            return 0;
        }
        
    }
    
    if (c!=4){
                cout << 0 << '\n';
                return 0;
            } 
    cout << "1" << '\n';
    
    return 0;
}