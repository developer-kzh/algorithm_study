#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int n, korean, english, math;
string name;
vector<pair<pair<string, int>, pair<int, int>>> member;

int compare(pair<pair<string, int>, pair<int, int>> a, pair<pair<string, int>, pair<int, int>> b) {
	if (a.first.second == b.first.second) {
		if (a.second.first == b.second.first)
			if (a.second.second == b.second.second)
				return a.first.first < b.first.first;
			else
				return a.second.second > b.second.second;
		else
			return a.second.first < b.second.first;
	}
	else {
		return a.first.second > b.first.second;
	}
}


int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name >> korean >> english >> math;
		member.push_back(make_pair(make_pair(name, korean), make_pair(english, math)));
	}

	sort(member.begin(), member.end(), compare);
	for (auto i : member) {
		cout << i.first.first << "\n";
	}


}