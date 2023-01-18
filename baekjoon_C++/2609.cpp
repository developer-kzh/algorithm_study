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
	int mul = x * y;
	return x * y / gcd(x, y);
}

int main() {
	int x, y;
	cin >> x >> y;
	int gcd_result = gcd(x, y);
	int lcm_result = lcm(x, y);
	cout << gcd_result << '\n' << lcm_result;
	
}