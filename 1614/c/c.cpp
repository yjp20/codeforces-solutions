// youngjinp20
// 2021 11

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MOD = 1e9+7;

int main() {
	int T;
	cin >> T;

	for (int t=0; t<T; t++) {
		int N, M;
		cin >> N >> M;

		int ct[31] = {0};
		int ans[N];
		vector<int> add[N];
		vector<int> remove[N];
		for (int i=0; i<M; i++) {
			int L, R,	X;
			cin >> L >> R >> X;
			add[L-1].push_back(X);
			remove[R-1].push_back(X);
		}

		int stack=0;
		for (int i=0; i<N; i++) {
			for (auto e : add[i]) {
				for (int j=0; j<31; j++) {
					if (e & (1 << j)) ct[j] ++;
				}
				stack ++;
			}
			int sum = 0;
			for (int i=0; i<31; i++) {
				if (ct[i] == stack) sum += 1 << i;
			}
			ans[i] = sum;
			for (auto e : remove[i]) {
				for (int j=0; j<31; j++) {
					if (e & (1 << j)) ct[j] --;
				}
				stack --;
			}
		}

		ll dp[31][2];
		for (int i=0; i<31; i++) {
			dp[i][0] = 1;
			dp[i][1] = 0;
		}

		for (int i=0; i<N; i++) {
			for (int j=0; j<31; j++) {
				if (ans[i] & (1 << j)) {
					dp[j][0] = dp[j][1] = (dp[j][0] + dp[j][1]) % MOD;
				} else {
					dp[j][0] = 2 * dp[j][0] % MOD;
					dp[j][1] = 2 * dp[j][1] % MOD;
				}
			}
		}

		ll res = 0;
		for (int i=0; i<31; i++) {
			res += dp[i][1] * (1 << i);
			res %= MOD;
		}

		cout << res << endl;
	}

	return 0;
}
