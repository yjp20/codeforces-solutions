// youngjinp20
// 2020 08

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

ll dp[4000][4000];
int ct[4000];

int main() {
	int T, A[4000];
	cin >> T;

	while (T--) {
		int N;
		cin >> N;

		for (int i=1; i<=N; i++) {
			cin >> A[i];
		}


		for (int i=1; i<=N; i++) {
			for (int j=1; j<=N; j++) {
				dp[i][j] = 0;
			}
		}

		for (int i=1; i<=N; i++) {
			ll acc = 0;
			for (int j=i+1; j<=N; j++) {
				acc += A[j] == A[i];
				dp[i][j] = dp[i-1][j] + acc;
			}
		}

		ll sum = 0;
		for (int i=1; i<=N; i++) {
			for (int j=i+2; j<N; j++) {
				if (A[i] != A[j]) continue;
				ll v = dp[j-1][N] - dp[j-1][j] - dp[i][N] + dp[i][j];
				sum += v;
			}
		}

		cout << sum << endl;
	}

	return 0;
}
