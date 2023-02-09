#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N,M;
	string name;
	string pro;
	map<string, int> pocketName;
	map<int, string> pocketNum;

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		cin >> name;
		pocketName.insert(make_pair(name, i));
		pocketNum.insert(make_pair(i, name));
	}
	while (M--) {
		cin >> pro;
		if (48 <= pro[0] && pro[0] <= 57) {
			cout << pocketNum[stoi(pro)] << '\n';
		}
		else {
			cout << pocketName[pro] << '\n';
		}
	}
}