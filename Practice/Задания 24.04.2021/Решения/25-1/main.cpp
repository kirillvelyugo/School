#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkCountDivs (int n, vector <int>& divs){
    for (int i = 1; i * i <= n; i++){
        if (i * i == n){
            divs.push_back(i);
        }else if(n % i == 0){
            divs.push_back(i);
            divs.push_back(n / i);
        }
    }
    if (divs.size() == 4){
        return true;
    }else{
        return false;
    }
}
int main()
{

    for (int i = 126849; i <= 126871; i++){
        vector <int> divs;

        if(checkCountDivs(i, divs)){
            sort(divs.begin(), divs.end());
            for (int i = 0; i < divs.size(); i++){
                cout << divs[i] << ' ';
            }
            cout << endl;
        }
    }


    return 0;
}
