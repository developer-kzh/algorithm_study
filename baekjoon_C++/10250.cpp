#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	int T, H, W, N, result;
	cin >> T;
	while (T--) {
		cin >> H >> W >> N;
		if (N % H == 0)
			result = H * 100 + (N / H);
		else
			result = (N % H) * 100 + (N / H +1);
		cout << result << '\n';
	}
}