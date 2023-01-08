#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int n, x;
string str;
queue<int> q;
int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			cin >> x;
			q.push(x);
		}
		if (str == "front") {
			if (q.empty()) cout << -1 << '\n';
			else cout << q.front() << '\n';
		}
		if (str == "back") {
			if (q.empty()) cout << -1 << '\n';
			else cout << q.back() << '\n';
		}
		if (str == "size") {
			cout << q.size() << '\n';
		}
		if (str == "empty") {
			if (q.empty()) cout << "1" << '\n';
			else cout << "0" << '\n';
		}
		if (str == "pop") {
			if (q.empty()) cout << "-1" << '\n';
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
	}
}
