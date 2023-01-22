#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, m, x, y;
vector<int> edge[101];
int visit[101];
int cnt = 0;

void bfs(int start) {
	queue<int> q;
	q.push(start);
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		if (visit[cur] == 1) continue;
		visit[cur] = 1;
		cnt += 1;
		for (int i = 0; i < edge[cur].size(); i++) {
			if (visit[edge[cur][i]] == 0) {
				q.push(edge[cur][i]);
			}
		}
	}
}

int main() {
	cin >> n >> m;
	while (m--) {
		cin >> x >> y;
		edge[x].push_back(y);
		edge[y].push_back(x);
	}
	bfs(1);
	cout << cnt << '\n';
}