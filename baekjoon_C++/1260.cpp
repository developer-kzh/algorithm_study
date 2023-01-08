#include <iostream>
#include <queue>
#include <algorithm>
#include <stack>
using namespace std;

//cin.tie(0);
//cout.tie(0);
//ios::sync_with_stdio(false);
//C++ 빠른 입출력 방법

int n, m, v, x, y, visit[1001];
vector<int> edge[1001];

/*
edge[1] : { 2,5 }
2 : 1,3,5
..
6 : 4
*/
//void dfs(int start) {
//   stack<int> s;
//   s.push(start);
//   while (!s.empty()) {
//      int cur = s.top();
//      s.pop();
//      if (visit[cur] == 1)
//         continue;
//      cout << cur << ' ';
//      visit[cur] = 1;
//      for (int i = edge[cur].size() - 1; i >= 0; i--) {
//         s.push(edge[cur][i]);
//      }
//   }
//}
void dfs(int cur) {
    visit[cur] = 1;
    cout << cur << ' ';
    for (int to : edge[cur]) {
        if (visit[to] == 0)
            dfs(to);
    }
}
void bfs(int start) {
    queue<int> q;
    q.push(start);
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        if (visit[cur] == 0)
            continue;
        cout << cur << ' ';
        visit[cur] = 0;
        for (int i = 0; i < edge[cur].size(); i++) {
            q.push(edge[cur][i]);
        }
    }
}
int main() {
    cin >> n >> m >> v;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
        sort(edge[i].begin(), edge[i].end());
    dfs(v);
    cout << '\n';
    bfs(v);
}