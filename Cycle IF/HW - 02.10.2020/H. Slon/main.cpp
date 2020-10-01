#include <iostream>
using namespace std;

int main() {
    int sln1,sln2,x,y;
    cin >> sln1 >> sln2 >> x >> y;
    
/*
    if (sln1 < 1 || sln1 > 8) {
        return 0;
    } else if (sln2 < 1 || sln2 > 8) {
        return 0;
    } else if (x < 1 || x > 8) {
        return 0;
    } else if (y < 1 || y > 8) {
        return 0;
    } 
Вроде как не нужный алгоритм (в условии не требуется), но с ним тоже все работает :)     
*/

    if ((sln1+sln2==x+y) || (sln1-sln2==x-y)) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
    
    
    return 0;
}
