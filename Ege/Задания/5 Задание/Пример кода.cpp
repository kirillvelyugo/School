#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int minMax(int num) {
	int secNum, i = 0;
	vector <int> a;

	while (num != 0) {
		a.push_back(num % 10);
		i++;
		num /= 10;
	}
	sort(a.begin(), a.end());
	
	num = a[0] * 10 + a[1];
	secNum = a[2] * 10 + a[1];
	return abs(num - secNum);
}

int main()
{
	int count = 0;
	for (int i = 100; i <= 999; i++) {
		int raz = minMax(i);
		if (raz == 58) {
			count++;
		}
	}

	cout << count << endl;
	return 0;
}
