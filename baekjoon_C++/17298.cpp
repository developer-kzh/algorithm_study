#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int n,x;
int a;
stack<int> s;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	cin >> n;
	while (n != 0) {
		cin >> x;
		s.push(x);
		n -= 1;
	}
	while (!s.empty()) {
		a = s.();
		while (s.size() != 0) {
			if (s.top())
			else
				cout << '-1' << ' ';
		}
	}
}
