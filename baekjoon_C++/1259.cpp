#include <iostream>
using namespace std;

string num;
int main() {
	while (1) {
		cin >> num;
		if (num == "0")
			break;
		int len = num.length();
		bool pnum = true;
		for (int i = 0; i < num.length() / 2; i++) {
			if (num[i] != num[--len]) {
				pnum = false;
				break;
			}
			else {
				pnum = true;
			}
		}
		if (pnum) {
			cout << "yes" << '\n';
		}
		else
			cout << "no" << '\n';
	}
	return 0;
}