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

int main() {
	int T; 
	cin >> T;
	int x, y, result;
	while (T--) {
		cin >> x >> y;
		result = gcd(x, y);
		cout << result << '\n';
	}
}