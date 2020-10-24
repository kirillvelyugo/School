#include <iostream>
#include <string>
using namespace std;

int main(){
    int max;
    string s;
    getline (cin,s);
    for (int i=0; i<s.size(); i++){
        if (max<i){
            max=i;
        }
        if (s[i]== ' '){
            i=0;
        }
    }
    cout<<max;
    return 0;
}
