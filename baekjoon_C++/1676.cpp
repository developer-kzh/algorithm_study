#include <iostream>

using namespace std;

int main() {
	int N;
	int cnt = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int temp = i;
		while (temp % 5 == 0 && temp / 5 != 0) {
			cnt++;
			temp /= 5;
		}
	}
	cout << cnt;
}