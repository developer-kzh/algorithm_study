#include <iostream>
#include <set>

using namespace std;

int n, m;
set<string> s;
set<string> s1;

string name;

int main() {
	cin >> n >> m;
	while (n > 0) {
		cin >> name;
		s.insert(name);
		n -= 1;
	}
	while (m > 0) {
		cin >> name;
		if (s.find(name) != s.end())
			s1.insert(name);
		m -= 1;
	}
	cout << s1.size() << '\n';
	for (auto i = s1.begin(); i != s1.end(); i++)
		cout << *i <<'\n';
}