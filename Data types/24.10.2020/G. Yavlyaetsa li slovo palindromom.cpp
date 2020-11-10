#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool s;
    string text;
    getline (cin, text);
    
    for (int i=0; i<text.size(); i++){
        if (text [0+i] == text [text.size()-i-1]){
           s=true; 
        }else{
            cout << "no";
            return 0;
        }
    }
    
    if (s==true){
        cout << "yes";
    }
    
    return 0;
}
