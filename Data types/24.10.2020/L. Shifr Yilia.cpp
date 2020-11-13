#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, a;
    int k=0;
    cin >> s >> k;
    
     for ( int i=0; i<s.size(); i++ ){
        if (s[i]-k<'A'){
            s[i]+=(26-k);  
        }else{
        s[i]-=k;
        }
        
        cout << s[i];
    }

    return 0;
}
