#include <iostream>
#include <queue>

using namespace std;

int w, h, cnt;
int m[50][50];
bool visit[50][50];

int dx[8] = { -1,-1,0,1,1,1,0,-1 };
int dy[8] = { 0,1,1,1,0,-1,-1,-1 };

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push({ x, y });
	visit[x][y] = true;
	while (!q.empty()) {
		pair<int, int> cur = q.front();
		q.pop();
		for (int i = 0; i < 8; i++) {
			int cx = cur.first + dx[i];
			int cy = cur.second + dy[i];
			if (cx < 0 || cx >= w || cy < 0 || cy >= h)
				continue;
			if (visit[cx][cy] == false && m[cx][cy] == 1) {
				q.push({ cx, cy });
				visit[cx][cy] = true;
			}
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	while (1) {
		cin >> w >> h;
		if (w == 0) break;
		cnt = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> m[j][i];
				visit[j][i] = false;
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (visit[j][i] == false && m[j][i] == 1) {
					bfs(j, i);
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}
}