#include <iostream>
using namespace std;

bool Election(bool x, bool y, bool z){
    int sum=0;
    sum = x + y + z;
    if (sum >= 2){
        return true;
    }else{
        return false;
    } 
}

int main(){
    bool x,y,z;
    cin >> x >> y >> z;
    
    cout << int (Election(x,y,z)) << '\n';
    return 0;
}