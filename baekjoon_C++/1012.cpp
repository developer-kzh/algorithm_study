#include <iostream>
#include <stack>

using namespace std;

int T, M, N, K, cnt;
int m[50][50];
bool visit[50][50];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };

void dfs(int x, int y) {
	visit[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int cx = x + dx[i];
		int cy = y + dy[i];
		if (cx < 0 || cy < 0 || cx >= M || cy >= N)
			continue;
		if (m[cx][cy] == 1 && !visit[cx][cy])
			dfs(cx, cy);
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	int r, c;
	cin >> T;
	while (T--){
		cnt = 0;
		cin >> M >> N >> K;
		for (int i = 0; i < K; i++) {
			cin >> r >> c;
			m[r][c] = 1;
			visit[r][c] = false;
		}
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (!visit[i][j] && m[i][j] == 1) {
					dfs(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}
}