#include <iostream>
#include <cmath>

using namespace std;

int primeArr[1001];

void primeNUM() {
	int num_cnt, num;
	int primeNUM_cnt = 0;
	int end = 0;
	
	// �迭 ���� �� �ʱ�ȭ
	for (int i = 1; i <= 1000; i++) {
		primeArr[i] = i;
	}

	cin >> num_cnt;
	int first = 0;
	first = num_cnt;
	while (num_cnt--) {
		cin >> num;
		if (num_cnt == 0)
			end = num;
		//primeArr[num] = 0;
	}

	// 2���� �����ؼ� ��� �����
	for (int i = 2; i <= sqrt(end); i++) {
		// �̹� ������ ���
		if (primeArr[i] == 0)
			continue;
		for (int j = 2 * i; j <= end; j += i)
			primeArr[j] = 0;
	}
	// ���� ã�� 
	for (int i = first; i <= num_cnt; i++) {
		cout << first << "A";
		if (primeArr[i] != 0)
			primeNUM_cnt++;
	}
	cout << primeNUM_cnt;
}


int main(void) {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	primeNUM();

	return 0;
}