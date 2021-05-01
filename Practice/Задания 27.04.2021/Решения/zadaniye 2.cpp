#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector <string> v;
    string fullS;
    getline(cin, fullS);
    
    int minLength = 21, length = 0; 
    string s;
    for (int i = 0; i < fullS.size(); i++){
        if((fullS[i] >= 'A' && fullS[i] <= 'Z') || (fullS[i] >= 'a' && fullS[i] <= 'z')){
            length++; 
            s += fullS[i];
        }else{
            if (minLength > length){
                minLength = length;
            }
            length = 0;
            v.push_back(s);
            s = "";
        }
        if(fullS[i] == '.'){
            break;
        }
    }
    
    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < v[i].size(); j++){
            if (v[i][j] >= 'A' && v[i][j] <= 'Z'){
                if (v[i][j] - minLength >= 'A' ){
                    v[i][j] -= minLength;    
                }else{
                    v[i][j] = (v[i][j] - minLength) + 26;
                }    
            }else{
                if (v[i][j] - minLength >= 'a' ){
                    v[i][j] -= minLength;    
                }else{
                    v[i][j] = (v[i][j] - minLength) + 26;
                }
            }
        }   
        cout << v[i] << ' ';
    }
    
    cout << '.';
    return 0;
}