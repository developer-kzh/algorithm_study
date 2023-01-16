#include <iostream>
#include <vector>

using namespace std;

int ans = 0;

int num;
int numArr[7];
vector <int> v;

int main(void) {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	for (int i = 0; i < 7; i++) {
		cin >> num;
		numArr[i] = num;
	}
	for (int i = 0; i < 7; i++) {
		if (numArr[i] % 2 != 0) {
			ans += numArr[i];
			v.push_back(numArr[i]);
		}
	}
	if (!v.empty()) {
		int min = v.front();
		for (int i = 0; i < v.size(); i++) {
			if (v[i] <= min) {
				min = v[i];
			}
		}
		cout << ans << '\n' << min;
	}
	else 
		cout << "-1";		

}