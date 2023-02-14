#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> v;
	bool asc = false;
	bool des = false;
	bool mix = false;
	for (int i = 0; i < 8; i++) {
		cin >> n;
		v.push_back(n);
	}
	if (v[0] == 1 || v[0] == 8) {
		int j = 7;
		for (int i = 1; i < v.size(); i++) {
			if (v[i] == i + 1) {
				if (des == true) {
					cout << "mixed";
					break;
				}
				asc = true;
				if (i == 7)
					cout << "ascending";
			}
			else if (v[i] == j) {
				if (asc == true) {
					cout << "mixed";
					break;
				}
				des = true;
				if (i == 7)
					cout << "descending";
			}
			else {
				cout << "mixed";
				break;
			}
			j--;
		}
	}
	else {
		cout << "mixed";
	}
}