#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, sum;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		sum = 0;
		string str = to_string(i);
		sum += i;
		for (int j = 0; j < str.size(); j++) {
			sum += str[j] - 48;
		}
		if (sum == N) {
			cout << i;
			break;
		}
		else {
			if (i == N)
				cout << "0";
		}
	}
	return 0;
}