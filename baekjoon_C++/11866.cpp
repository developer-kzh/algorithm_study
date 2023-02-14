#include <iostream>
#include <queue>
#include <vector>
using namespace std;

queue<int> q;
vector<int> v;
int i = 1;
int main() {
	int n, k;
	cin >> n >> k;
	cout << "<";
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	while (!q.empty()) {
		if (i % k != 0) {
			q.push(q.front());
		}
		else {
			if (q.size() != 1) {
				cout << q.front() << ", ";
			}
			else {
				cout << q.front() << ">";
			}
		}
		q.pop();
		i++;
	}
}