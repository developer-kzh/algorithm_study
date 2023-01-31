#include <iostream>
#include <vector>
using namespace std;


int main() {
	int N, M;
	int card;
	vector<int> v;
	int sum,max = 0;
	cin >> N >> M;
	while (N--) {
		cin >> card;
		v.push_back(card);
	}
	for (int i = 0; i < v.size()-2; i++) {
		for (int j = i + 1; j < v.size() - 1; j++) {
			for (int k = j + 1; k < v.size(); k++) {
				sum = v[i] + v[j] + v[k];
				if (sum > M)
					continue;
				else if (sum == M) {
					max = M;
					break;
				}
				else {
					if (sum > max) {
						max = sum;
					}
				}
			}
		}
	}
	cout << max;
}
