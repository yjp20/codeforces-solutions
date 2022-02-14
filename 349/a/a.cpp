// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N;
int a, b, c;

int main() {
	cin >> N;

	for (int i=0; i<N; i++) {
		int T;
		cin >> T;

		if (T == 25) {
			++a;
		}

		if (T == 50) {
			--a;
			++b;
		}

		if (T == 100) {
			if (b) {
				--b;
				--a;
			}
			else {
				a -= 3;
			}
		}

		if (a < 0) {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;

	return 0;
}
