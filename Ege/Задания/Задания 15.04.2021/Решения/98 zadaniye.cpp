#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void genCubes(vector <int>& cubes) {
    for (int i = 3; i * i * i <= 531135; i += 2) {
        cubes.push_back(i * i * i);
    }
}

bool checkDiv(int n, vector <int> cubes) {
    for (int i = 0; cubes[i] <= n; i++) {
        if (cubes[i] == n) {
            return true;
        }
    }
    return false;
}

int main()
{
    vector <int> cubes;
    genCubes(cubes);

    for (int i = 250047; i <= 531135; i++) {
        vector <int> divs;

        for (int j = 2; j * j <= i; j++) {
            if (j * j == i && checkDiv(j, cubes)) {
                divs.push_back(j);
            }
            else if (i % j == 0) {
                if (checkDiv(j, cubes)) {
                    divs.push_back(j);
                }
                if (checkDiv(i / j, cubes)) {
                    divs.push_back(i / j);
                }
                
            }
        }

        if (divs.size() >= 4) {
            sort(divs.begin(), divs.end());

            cout << i << ' ' << divs.size() << ' ' << divs[divs.size() - 1] << endl;
        }
    }

    return 0;
}

