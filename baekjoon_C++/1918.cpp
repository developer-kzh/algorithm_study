#include <iostream>
#include <stack>

using namespace std;

stack<char> s;

int main() {
	string exp;
	cin >> exp;
	for (int i = 0; i < exp.size(); i++) {
		char c = exp[i];
		if (c == '(' || c == ')' || c == '*' || c == '+' || c == '-' || c == '/') {
			if (c == '(') {
				s.push(c);
			}
			else if (c == ')') {
				while (s.top() != '(') {
					cout << s.top();
					s.pop();
				}
				s.pop(); // 괄호 지우기
			}
			else if (c == '*' || c == '/') {
				while (!s.empty() && (s.top() == '*' || s.top() == '/')) {
					cout << s.top();
					s.pop();
				}
				s.push(c);
			}
			else if (c == '+' || c == '-') {
				while (!s.empty() && s.top() != '(') {
					cout << s.top();
					s.pop();
				}
				s.push(c);
			}
		}
		else { //피연산자인 경우
			cout << c;
		}
	}
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}

