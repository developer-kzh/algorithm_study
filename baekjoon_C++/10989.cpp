#include <iostream>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int N,num;
	int arr[10001] = {0,};
	cin >> N;
	while (N--) {
		cin >> num;
		arr[num]++;
	}
	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << '\n';
		}
	}
}