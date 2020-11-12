#include <iostream>
#include <string>
using namespace std;

int main(){
    int kor;
    string nap;
    cin >> nap >> kor;
    
    if (kor == 0){
        cout << '0' << ' ' << '0' << '\n';
        return 0;
    }
    
    if (nap == "North" ){                                   //меняется y, x остается
        cout << '0' << ' ' << kor << '\n';
    } else if (nap == "South" ){
        cout << '0' << ' ' << '-' <<kor << '\n';
    } else if (nap == "East" ){                             //меняется x, y остается
        cout << kor << ' ' << '0' << '\n';                  
    } else if (nap == "West" ){
        cout << '-' <<kor << ' ' << '0' << '\n';
        
    } 

    return 0;
}

