#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1(2019, '1');
	string s2(2119, '3');
	s1 = s1 + s2;
	
	while (s1.find("11") != string::npos) {
		int p = s1.find("11");
		s1.replace(p, 2, "2");

		if (s1.find("22") != string::npos) {
			int p2 = s1.find("22");
			s1.replace(p2, 2, "3");
		}

		if (s1.find("33") != string::npos) {
			int p3 = s1.find("33");
			s1.replace(p3, 2, "1");
		}
	}
	
	cout << s1 << endl;
}