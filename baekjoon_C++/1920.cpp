#include <iostream>
#include <set>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	int N, num, M;
	set<int> s;
	cin >> N; 
	while (N--) {
		cin >> num;
		s.insert(num);
	}
	cin >> M;
	while (M--) {
		cin >> num;
		if (s.count(num) != 0) {
			cout << "1" << '\n';
		}
		else
			cout << "0" << '\n';
	}
}