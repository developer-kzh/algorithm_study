#include <iostream>

using namespace std;

int main() {
	int N, S, C, L, rank;
	int arr[3] = { 0, };
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> S >> C >> L;
		if (arr[0] < S) {
			rank = i;
			arr[0] = S; arr[1] = C; arr[2] = L;
		}
		else if (arr[0] == S) {
			if (arr[1] > C) {
				rank = i;
				arr[1] = C; arr[2] = L;
			}
			else if (arr[1] == C) {
				if (arr[2] > L) {
					rank = i;
					arr[2] = L;
				}	
			}
		}
	}
	cout << rank << '\n';
}