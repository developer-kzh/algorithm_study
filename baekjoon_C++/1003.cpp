#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int T, N;
    int arr[41] = {0, 1, 1};
    cin >> T;
    for (int i = 3; i < 41; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    while (T--) {
        cin >> N;
        if (N == 0) {
            cout << "1 0" << '\n';
        }
        else if (N == 1) {
            cout << "0 1" << '\n';
        }
        else {
            cout << arr[N - 1] << ' ' << arr[N] << '\n';
        }
    }
}