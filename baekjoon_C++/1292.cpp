#include <iostream>
#include <vector>
using namespace std;

int main() {
	int A, B;
	vector<int> v;
	int sum = 0;
	for (int i = 1; i <= 46;i++) {
		int temp = i;
		while (temp--) {
			v.push_back(i);
		}
	}
	cin >> A >> B;
	for (int i = A-1; i < B; i++) {
		sum += v[i];
	}
	cout << sum;
}