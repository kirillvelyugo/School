#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

void findDivs(vector <int>& divs, int n) {
    for (int i = 2; i * i <= n; i++) {
        if (i * i == n) {
            divs.push_back(i);
        }
        else if (n % i == 0) {
            divs.push_back(i);
            divs.push_back(n / i);
        }
    }
}

int countCubes(vector <int>& divs) {
    int count = 0;
    for (int i = 0; i < divs.size(); i++) {
        if (divs[i] != 0 && int(pow(divs[i], 1. / 3)) * int(pow(divs[i], 1. / 3)) * int(pow(divs[i], 1. / 3)) == divs[i]) {
            count++;
        }
    }
    return count;
}
int main()
{
    for (int i = 228224; i <= 531135; i++) {
        vector <int> divs;
        findDivs(divs, i);
        sort(divs.begin(), divs.end());

        if (countCubes(divs) == 4) {
            cout << i << ' ' << divs.size() << ' ' << divs[divs.size() - 1] << endl;
        }
    }
    return 0;
}
