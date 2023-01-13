#include <iostream>
#include <cmath>

using namespace std;

int primeArr[1000001];

void primeNUM() {
	int M, N;
	cin >> M >> N;
	// 배열 생성 후 초기화
	for (int i = 2; i <= N; i++) {
		primeArr[i] = i;
	}
	
	// 2부터 시작해서 배수 지우기
	for (int i = 2; i <= sqrt(N); i++) {
		// 이미 지워진 경우
		if (primeArr[i] == 0)
			continue;
		for (int j = 2 * i; j <= N; j += i)
			primeArr[j] = 0;
	}
	// 소수 출력
	for (int i = M; i <= N; i++) {
		if (primeArr[i] != 0)
			cout << primeArr[i] << ' ';
	}
}


int main(void) {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	primeNUM();
	
	return 0;
}