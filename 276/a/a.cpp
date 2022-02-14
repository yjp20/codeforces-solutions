// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int N, K;
	int best = -1e9;
	cin >> N >> K;

	for (int i=0; i<N; i++) {
		int F, T;
		cin >> F >> T;
		best = max(best, F - max(0, T - K));
	}

	cout << best;

	return 0;
}
