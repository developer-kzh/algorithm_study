#include <iostream>

using namespace std;

int main() {
	int arr[26] = {0};
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (65 <= str[i] && str[i] <= 90) { // A ~ Z ������ ���
			int temp = str[i] - 65;
			arr[temp] += 1;
		}
		else if (97 <= str[i] && str[i] <= 122) { // a ~ z ������ ���
			int temp = str[i] - 97;
			arr[temp] += 1;
		}
	}
	string max_s;
	int max_i = 0;
	for (int i = 0; i <= 25; i++) {
		if (arr[i] > max_i) {
			max_i = arr[i];
			max_s = i + 65;
		}
		else if (arr[i] < max_i) {
			continue;
		}
		else {
			max_s = 63;
		}
	}
	cout << max_s;
}