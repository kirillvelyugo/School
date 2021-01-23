#include <iostream>
using namespace std;

int main() {
    int frz1,frz2,x,y;
    cin >> frz1 >> frz2 >> x >> y;
    
/*
    if (frz1 < 1 || frz1 > 8) {
        return 0;
    } else if (frz2 < 1 || frz2 > 8) {
        return 0;
    } else if (x < 1 || x > 8) {
        return 0;
    } else if (y < 1 || y > 8) {
        return 0;
    } 
Вроде как не нужный алгоритм (в условии не требуется), но с ним тоже все работает :)     
*/

    if (((frz1==x && frz2!=y) || (frz1!=x && frz2==y)) || ((frz1+frz2==x+y) || (frz1-frz2==x-y))) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    } 
    
    return 0;
}
