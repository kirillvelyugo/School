#include <iostream>
#include <string>
using namespace std;


bool Compare(string s1, string s2){
   if (s1==s2){
       return true;
   } else {
       return false;
   }
}

int main(){
    string s1,s2;
    int x;
    cin >> s1 >> s2;
    x=Compare(s1,s2);
    if (x==0){
        cout << "no" << '\n';
    }else if (x==1){
        cout << "yes" << '\n';
    }

    return 0;
}
