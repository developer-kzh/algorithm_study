#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int N, height;
	stack<pair<int, int>> s; // <탑의 번호, 탑의 높이> 

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> height;
		while (!s.empty()) {
			if (s.top().second > height) {
				cout << s.top().first << ' ';
				break;
			}
			else
				s.pop();
		}
		if (s.empty()) {
			cout << 0 << ' ';
		}
		s.push(make_pair(i, height));
	}
}