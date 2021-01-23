#include <iostream>
using namespace std;

int main() {
	const int a = 1000;
	int n, k, c = 0, m = 0, temp, ck = 0;
	cin >> n;
	int s[a];

	for (int i = 0; i < n; i++) { // ввод массива CORRECT
		cin >> s[i];
	}

	for (int i = 0; i < n; i++) { // проход по символам массива CORRECT
		k = 1;
		while (s[i] == s[i + 1]) { // поиск повтор€ющихс€ последовательностей 
			k++;
			i++;
		}
		if (k >= 3) { // поиск повтор€ющихс€ последовательностей больше 3 символов
			for (int x = i - k + 1; x <= i; x++) {	// замена последовательности на -1
				s[x] = -1;
			}
			k = 1;
		}
	}

	for (int i = 0; i < n; i++) {
		if (s[i] != -1) {
			if (s[i] == s[i + 1] && s[i + 2] == -1) { // ситуаци€ типа 1 1 -1 -1 -1 1 2 3
				k = 2;
				i += 2;
				while (s[i] == -1) {	// подсчет количества -1
					i++;
					m++;
				}
				temp = s[i];	// запись числа после последовательности -1
				if (temp == s[i - m - 2]) {
					i = i - m - 2;
					while (s[i] == temp || s[i] == -1) {
						s[i] = -1;
						i++;
					}
					ck++;
					i = 0;
				}
				m = 0;
			}
		}
		if (s[i] != -1) {
			if (s[i + 1] == -1) { // ситуаци€ типа 1 -1 -1 -1 1 1 2 3
				k = 1;
				temp = s[i];
				i++;
				while (s[i] == -1) {
					i++;
					m++;
				}
				if (s[i] == temp && s[i + 1] == temp) {
					i = i - m - 1;
					while (s[i] == temp || s[i] == -1) {
						s[i] = -1;
						i++;
					}
					ck++;
					i = 0;
				}
				m = 0;
			}
		}
		if (ck >= 1) {
			i = -1;
			ck = 0;
		}
	}

	for (int i = 0; i < n; i++) { // подсчет удаленных символов
		if (s[i] == -1) {
			c++;
		}
	}
	cout << c << '\n'; // вывод количества удаленных шариков
	return 0;
}