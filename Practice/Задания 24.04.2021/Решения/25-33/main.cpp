#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countDivs(int n, vector <int>& divs){
    for (int i = 1; i * i <= n; i++){
        if (i * i == n){
            divs.push_back(i);
        }else if (n % i == 0){
            divs.push_back(i);
            divs.push_back(n / i);
        }
    }
    return divs.size();
}


int main()
{
    int countMax = 0, maxDiv = 0, preMaxDiv = 0;
    for (int i = 286564; i <= 287270; i++){
        vector <int> divs;

        int x = countDivs(i, divs);
        if(x > countMax){
            countMax = x;
            sort(divs.begin(), divs.end());
            maxDiv = divs[divs.size() - 1];
            preMaxDiv = divs[divs.size() - 2];
        }

    }

    cout << countMax << ' ' << maxDiv << ' ' << preMaxDiv << endl;
    return 0;
}
