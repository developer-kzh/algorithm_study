#include <iostream>
#include <string>
using namespace std;

int arr[10];


int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int temp = a * b * c;
	string str = to_string(temp);
	for (int i = 0; i < str.size(); i++) {
		int j = str[i] - 48;
		arr[j]++;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << '\n';
	}
}