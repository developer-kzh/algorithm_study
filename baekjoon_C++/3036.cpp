#include <iostream>
#include <vector>

using namespace std;

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}

int N;
int r;
vector<int> v;
int main() {
	
	cin >> N;
	
	while (N > 0 ) {
		cin >> r;
		v.push_back(r);
		N--;
	}
	int temp;
	for (int i = 0; i < v.size()-1; i++) {
		temp = gcd(v[0], v[i + 1]);
		cout << (v[0] / temp) << "/" << (v[i + 1] / temp) << '\n';
	}
}