#include <iostream>
#include <stack>

using namespace std;

int main() {
	int T;
	string str;
	bool check;
	cin >> T;
	while (T--) {
		check = true;
		stack<char> s;
		cin >> str;
		for (auto i : str) {
			if (s.empty()) {
				if (i == ')') {
					check = false;
					break;
				}
				else {
					s.push(i);
					check = true;
				}
			}
			else {
				if (i == ')') {
					s.pop();
				}
				else {
					s.push(i);
				}
			}
		}
		if (s.empty() && check) 
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';

	}
}