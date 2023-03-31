#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	int pivot = 1;
	int step = 6;
	int step_grow = 6;

	for (int i = 1; ; i++) {
		if (N <= pivot) {
			cout << i << '\n';
			break;
		}
		pivot += step;
		step += step_grow;
	}
}