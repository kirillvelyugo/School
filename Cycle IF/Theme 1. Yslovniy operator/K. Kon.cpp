#include <iostream>
using namespace std;

int main()
{
    int kn1,kn2,x,y;
    cin >> kn1 >> kn2 >> x >> y;
    
    /*
    if (kn1 < 1 || kn1 > 8) {
        return 0;
    } else if (kn2 < 1 || kn2 > 8) {
        return 0;
    } else if (x < 1 || x > 8) {
        return 0;
    } else if (y < 1 || y > 8) {
        return 0;
    } 
    Вроде как не нужный алгоритм (в условии не требуется), но с ним тоже все работает :)     
    */

    if ( ((y==kn2+2)&&(x==kn1+1)) || ((y==kn2+2)&&(x==kn1-1)) ){ // варианты хода вверх
        cout << "YES" << '\n';
    } else if ( ((y==kn2-2)&&(x==kn1+1)) || ((y==kn2-2)&&(x==kn1-1)) ) { //варианты хода вниз
        cout << "YES" << '\n';
    } else if ( ((x==kn1-2)&&(y==kn2+1)) || ((x==kn1-2)&&(y==kn2-1)) )  { //варианты хода влево
        cout << "YES" << '\n';
    } else if ( ((x==kn1+2)&&(y==kn2+1)) || ((x==kn1+2)&&(y==kn2-1)) )  { //варианты хода вправо
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
    return 0;
}