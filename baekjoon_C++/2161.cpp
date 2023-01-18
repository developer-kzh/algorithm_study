#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	int N, card;
	queue<int> q;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	bool odd = true; // Ȧ�� ��°���� pop
	while (!q.empty()) {
		if (odd) {
			cout << q.front() << '\n';
			q.pop();
			odd = false;
		}
		else {
			q.push(q.front());
			q.pop();
			odd = true;
		}
	}
}