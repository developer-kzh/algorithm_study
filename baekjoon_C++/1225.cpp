#include <iostream>

using namespace std;

long long ans;

string a, b;

int main(void) {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	cin >> a >> b;

	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			ans += (a[i] - '0') * (b[j] - '0');
		}
	}
	cout << ans;
	
}