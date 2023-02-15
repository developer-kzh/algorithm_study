#include <iostream>
#include <vector>
using namespace std;

int gcd(int x, int y) {
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main() {
	int t, n, num, sum;
	cin >> t;
	while (t--) {
		sum = 0;
		vector<int> v;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> num;
			v.push_back(num);
		}
		for (int i = 0; i < v.size() - 1; i++) {
			for (int j = i+1; j < v.size(); j++) {
				sum += gcd(v[i], v[j]);
			}
		}
		cout << sum << '\n';
	}
}