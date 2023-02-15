#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;
	for (int i = 97; i <= 122; i++) {
		if (str.find(i) <= 100)
			cout << str.find(i) << ' ';
		else
			cout << -1 << ' ';
	}
}