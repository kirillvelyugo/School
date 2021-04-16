#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sumMulDigits (int n, int &sum, int &mul){
    while (n != 0){
        sum += n % 10;
        mul *= n % 10;
        n /= 10;
    }
}

int main() {
	vector <pair<int,int>> v;
    for (int i = 87921; i <= 88187; i++){
        int sum = 0, mul = 1;
        sumMulDigits(i, sum, mul);
        if (sum % 14 == 0 && mul % 18 == 0 && mul != 0){
    		v.push_back({sum, mul});
		 }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++){
        cout << v[i].first << ' ' << v[i].second << endl;
    }
	return 0;
}