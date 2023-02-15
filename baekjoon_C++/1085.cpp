#include <iostream>

using namespace std;

int main() {
	int ans[4];
	int x, y, w, h;
	cin >> ans[0] >> ans[1] >> ans[2] >> ans[3];
	int temp1 = min(ans[0], ans[1]);
	int temp2 = min((ans[2] - ans[0]), (ans[3] - ans[1]));
	cout << min(temp1, temp2);

}