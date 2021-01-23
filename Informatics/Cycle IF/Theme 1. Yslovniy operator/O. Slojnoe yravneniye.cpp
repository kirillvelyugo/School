#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a == 0 and b == 0) {
		cout << "INF" << '\n';
	}
	else if (a == 0 || b % a != 0 || c * (-b / a) + d == 0) {
		cout << "NO" << '\n';
	}
	else {
		cout << -b / a << '\n';
	}



	return 0;
}