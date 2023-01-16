#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int K, num;
	stack<int> s;
	int sum = 0;

	cin >> K;

	while (K--) {
		cin >> num;
		if (num == 0) {
			s.pop();
			continue;
		}
		s.push(num);
	}
	while (!s.empty()) {
			sum += s.top();
			s.pop();
	}
	cout << sum;
}