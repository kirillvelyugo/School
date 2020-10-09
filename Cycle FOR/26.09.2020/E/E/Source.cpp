#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, n, sum = 1;
	cin >> a >> n;

	for (double i = 1; i <= n; i++) {
		int x;
		x = pow(a, i);
		sum += x;
	}
	cout << sum << '\n';
	return 0;
}
