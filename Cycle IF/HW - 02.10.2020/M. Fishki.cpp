#include <iostream>
using namespace std;

int main() {
	int k;
	cin >> k; 

	if ((k == 1) or (k % 4 == 0)) {
		cout << "YES" << '\n';
	} else {
		cout << "NO" << '\n';
	}
	return 0;
}