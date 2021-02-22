#include <iostream>
using namespace std;

int main() {
	int count = 0, max;
	for (int i = 49 * 49 * 49; i < 49 * 49 * 49 * 7; i++) {
		if (i % 3 == 2 && i % 8 != 3 && i % 12 != 5){
			count++;
			max = i;
		}
	}
	cout << count << endl << max << endl;
}