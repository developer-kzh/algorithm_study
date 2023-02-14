#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int N;
vector<double> v;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N;
	v.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	cout << fixed << setprecision(3);
	for (int i = 0; i < 7; i++) {
		 cout << v[i] << '\n';
	}
}