#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int n;
int primeArr[1001];
int cnt = 0;


int main(void) {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	cin >> n;
	int k;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(), v.end());
	int back = v.back();

	for (int i = 2; i <= back ; i++) {
		primeArr[i] = i;
	}

	for (int i = 2; i <= sqrt(back); i++) {
		if (primeArr[i] == 0)
			continue;
		for (int j = 2 * i; j <= back; j += i)
			primeArr[j] = 0;
	}
	int temp = 0;
	for (int i = 0; i < n; i++) {
		if (primeArr[v[temp]] != 0)
			cnt += 1;
		temp++;
	}
	cout << cnt;
	return 0;
}