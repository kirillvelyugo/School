#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool searchCountDivs(int n, vector <int>& divs){
    for (int i = 1; i * i <= n; i++){
        if (i * i == n && i % 2 == 0){
            divs.push_back(i);
        }else if (n % i == 0){
            if(i % 2 == 0){
                divs.push_back(i);
            }
            if ((n / i) % 2 == 0){
                divs.push_back(n / i);
            }
        }
    }
    return divs.size() == 4;
}

int main()
{

    for (int i = 190201; i <= 190280; i++){
        vector <int> divs;
        if(searchCountDivs(i, divs)){
            sort(divs.begin(), divs.end());
            for (int j = divs.size() - 1; j >= 0; j--){
                cout << divs[j] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}
