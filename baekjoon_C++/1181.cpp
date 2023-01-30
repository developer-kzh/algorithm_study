#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool f(string x, string y) {
	if (x.length() == y.length()) {
		for (int i = 0; i < x.length(); i++) {
			if (x[i] != y[i])
				return x[i] < y[i];
		}
	}
	return x.length() < y.length();
}

int main() {
	vector<string> v;
	int n;
	cin >> n;
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		v.push_back(str);
	}
	sort(v.begin(), v.end(), f);
	cout << v[0] << '\n';
	for (int i= 1; i < n; i++) {
		if (v[i - 1] == v[i])
			continue;
		cout << v[i] << '\n';
	}
}