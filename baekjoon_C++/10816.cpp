#include <iostream>
#include <map>

using namespace std;

int main() {
	int n, m, num;
	map<int, int> ans;
	cin >> n;
	while (n--) {
		cin >> num;
		ans[num]++;
	}
	cin >> m;
	while (m--) {
		cin >> num;
		cout << ans[num] << ' ';
	}
}