#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countDel(int n, vector <int>& divs) {
    for (int i = 1; i * i <= n; i++) {
        if (i * i == n) {
            divs.push_back(i);
        }
        else if (n % i == 0) {
            divs.push_back(i);
            divs.push_back(n / i);
        }
    }
}

int main()
{
    vector <int> divs;

    for (int i = 126849; i <= 126871; i++) {
        divs.clear();
        countDel(i, divs);

        if (divs.size() == 4) {
            sort (divs.begin(), divs.end());
            for (int i = 0; i < divs.size(); i++) {
                cout << divs[i] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}
