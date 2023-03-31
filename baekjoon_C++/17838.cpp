#include <iostream>

using namespace std;

int main() {
	int T;
	string str;
	cin >> T;
	while (T--) {
		cin >> str;
		if (str.size() != 7)
			cout << "0" << '\n';
		else {
			if (str[0] == str[1] && str[1] == str[4] &&
				str[2] == str[3] && str[3] == str[5] && str[5] == str[6])
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}
	}
}