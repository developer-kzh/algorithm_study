#include <iostream>

using namespace std;

string white[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW" };

string black[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

string board[50];

int whiteCnt(int x, int y) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != white[i][j])
				cnt++;
		}
	}
	return cnt;
}

int blackCnt(int x, int y) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != black[i][j])
				cnt++;
		}
	}
	return cnt;
}

int main() {
	int cnt;
	int n, m;
	
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}

	int wtmp, btmp;
	int min = 64;
	for (int i = 0; i + 8 <= n; i++) {
		for (int j = 0; j + 8 <= m; j++) {
			wtmp = whiteCnt(i, j);
			btmp = blackCnt(i, j);
			if (wtmp <= btmp) {
				if (wtmp < min)
					min = wtmp;
			}
			else
				if (btmp < min)
					min = btmp;
		}
	}
	cout << min;
}