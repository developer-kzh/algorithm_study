#include <iostream>

using namespace std;

int main() {
	int X, N, a, b;
	int sum = 0;
	cin >> X >> N;
	while (N--) {
		cin >> a >> b;
		sum += a * b;
	}
	if (X == sum) {
		cout << "Yes";
	}
	else
		cout << "No";
}