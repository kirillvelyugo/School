#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int x=0, y=0, x1, y1, chl;

    while (cin >> s >> chl ) {
        if (s == "North") {
            x1 = 0;
            y1 = chl;
        }
        else if (s == "South") {
            x1 = 0;
            y1 = -chl;
        }
        else if (s == "East") {
            x1 = chl;
            y1 = 0;
        }
        else if (s == "West") {
            x1 = -chl;
            y1 = 0;
        }
        x += x1;
        y += y1;
    }

    cout << x << ' ' << y << '\n';
    return 0;
}
