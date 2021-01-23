#include <iostream>
using namespace std;

int main() {
    int lad1,lad2,x,y;
    cin>> lad1 >> lad2>> x >> y;
    
 /*   if (lad1 < 1 || lad1 > 8) {
        return 0;
    } else if (lad2 < 1 || lad2 > 8) {
        return 0;
    } else if (x < 1 || x > 8) {
        return 0;
    } else if (y < 1 || y > 8) {
        return 0;
    } 
Вроде как не нужный алгоритм (в условии не требуется), но с ним тоже все работает :)     
*/
    
    if ((lad1==x && lad2!=y) || (lad1!=x && lad2==y)){
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n'; 
    }
    return 0;
}

