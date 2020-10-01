#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int raz1 = c - a;  // рубли
	int raz2 = d - b; // копейки

	if (raz2 < 0) {
		raz1 = raz1 - 1;
		raz2 += 100;
	}
	cout << raz1 << ' ' << raz2 << '\n';
	
	return 0;
}