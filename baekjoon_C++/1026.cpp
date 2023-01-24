#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> A;
vector<int> B;
int n, k;
int f(int q, int w) { return q > w; }
int sum = 0;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		A.push_back(k);
	}
	for (int i = 0; i < n; i++) {
		cin >> k;
		B.push_back(k);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), f);
	for (int i = 0; i < n; i++) {
		sum += A[i] * B[i];
	}
	cout << sum;
}