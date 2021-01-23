#include <iostream>
using namespace std;

bool Xor (bool x, bool y){
    if (x == y){
        return false;
    }else{
        return true;
    }
}

int main(){
    bool x,y,z;
    cin >> x >> y;
    z = Xor(x,y);
    if (z == true){
        cout << '1';
    }else{
        cout << '0';
    }

    return 0;
}