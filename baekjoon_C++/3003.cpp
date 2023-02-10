#include <iostream>

using namespace std;

int arr[6] = { 1,1,2,2,2,8 };
int num;

int main() {
	for (int i = 0; i < 6; i++) {
		cin >> num;
		cout << arr[i] - num << ' ';
	}
}