#include <iostream>
#include <string>
using namespace std;

int main (){
    string s, b;
    cin >> s >> b;

    if (b.find (s) != string::npos){
        cout << "yes" << '\n';
    }else {
        cout << "no" << '\n';
    }

    return 0;
}
