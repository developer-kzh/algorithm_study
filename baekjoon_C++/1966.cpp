#include <iostream>
#include <queue>

using namespace std;

int testcase, N, M, importance, cnt;

int main() {
	cin >> testcase;
	while (testcase--) {
		cin >> N >> M; //개수, 놓여진 위치
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		cnt = 0;
		for (int i = 0; i < N; i++) {
			cin >> importance;
			q.push(make_pair(i, importance));
			pq.push(importance);

		}
		while (!q.empty()) {
			pair<int, int> temp = q.front();
			q.pop();
			if (pq.top() == temp.second) {
				pq.pop();
				cnt++;
				if (temp.first == M) {
					cout << cnt << '\n';
					break;
				}
			}
			else
				q.push(temp);
		}
	}
}


