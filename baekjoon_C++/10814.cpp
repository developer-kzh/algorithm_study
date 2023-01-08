#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int n, age;
string name;
vector<pair<int, string>> member;

int compare(pair<int, string> a, pair<int, string> b) {
	if (a.first == b.first)
		return a.first > b.first;
	else
		return a.first < b.first;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		member.push_back(make_pair(age, name));
	}
	
	stable_sort(member.begin(), member.end(), compare);
	for (auto i : member) {
		cout << i.first << " " << i.second << "\n";
	}
		
}