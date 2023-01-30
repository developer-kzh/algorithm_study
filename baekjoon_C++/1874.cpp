#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack<int> s;
int n;
string str;
int m = 0;
int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	cin >> n;
	while (n--) {
		int tmp;
		cin >> tmp;
		if (tmp > m) {
			for (int i = 1; i <= tmp; i++) {
				s.push(i);
				str += "+";
				m++;
			}
			s.pop();
			str += "-";
		}
		else {
			if (!s.empty()) {
				if (tmp == s.top()) {
					s.pop();
					str += "-";
				}
				else if (tmp < s.top()) {
					cout << "NO";
					return 0;
				}
			}
		}
	}

	for (auto i : str) {
		cout << i << '\n';
	}
}