#include <iostream>

using namespace std;

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}

int lcm(int x, int y) {
	return x * y / gcd(x, y);
}

int main() {
	int T;
	int x, y;
	int result;
	cin >> T;
	while (T--) {
		cin >> x >> y;
		result = lcm(x, y);
		cout << result << '\n';
	}
}