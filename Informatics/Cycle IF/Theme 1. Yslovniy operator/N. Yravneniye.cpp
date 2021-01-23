#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	if (a == 0 and b == 0) {
		cout << "INF" << '\n';
	}
	else if (a == 0 or b%a!=0) {
		cout << "NO" << '\n';
	}
	else {
		cout << -b / a << '\n';
	}
	return 0;
}