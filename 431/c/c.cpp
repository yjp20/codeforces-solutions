// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MOD = 1e9+7;
int n, k ,d;

ll solve(int x, int y) {
	int arr[y+1] = {1};
	for (int i=1; i<=y; i++) {
		for (int j=1; j<=x; j++) {
			if (i-j>=0) {
				arr[i] += arr[i-j];
				arr[i] %= MOD;
			}
		}
	}
	return arr[y];
}

int main() {
	cin >> n >> k >> d;
	ll ans = solve(k, n) - solve(d-1, n) + MOD;
	ans %= MOD;
	cout << ans;

	return 0;
}
