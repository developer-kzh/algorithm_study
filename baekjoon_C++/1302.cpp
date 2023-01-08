#include <iostream>
#include <map>

using namespace std;

map<string, int> m;
int n, mx;
string name;

int main() {
	cin >> n;
	while (n > 0) {
		cin >> name;
		if (m.find(name) != m.end())
			m[name] += 1;
		else
			m.insert({ name, 1 });
		n -= 1;
	}
	for (auto i = m.begin(); i != m.end(); i++)
		if ((*i).second > mx) {
			mx = (*i).second;
			name = (*i).first;
		}
	cout << name << "\n";
}