#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N, M, num;
	vector<int> str;
	queue<int> q;
	vector<int> elem;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		str.push_back(num);
	}
	for (int i = 0; i < N; i++) {
		cin >> num;
		elem.push_back(num);
	}
	for (int i = N - 1; i >= 0; i--) {
		if (str[i] == 0) {
			q.push(elem[i]);
		}
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		q.push(num);
	}
	for (int i = 0; i < M; i++) {
		cout << q.front() << ' ';
		q.pop();
	}
}