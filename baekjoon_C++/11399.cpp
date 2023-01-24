#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main() {
	int N, time;
	int sum = 0;
	int temp = 0;
	vector<int> v;
	cin >> N;
	while (N--) {
		cin >> time;
		v.push_back(time);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j <= i; j++) {
			temp += v[j];
		}
		sum += temp;
		temp = 0;
	}
	cout << sum;
}