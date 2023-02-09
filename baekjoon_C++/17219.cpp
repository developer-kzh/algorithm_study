#include <iostream>
#include <map>
using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	string adr;
	string pw;
	int N, M;

	cin >> N >> M;
	map<string, string> ans;
	while (N--) {
		cin >> adr >> pw;
		ans.insert(make_pair(adr, pw));
	}
	while (M--) {
		cin >> adr;
		cout << ans[adr] << '\n';
	}
}