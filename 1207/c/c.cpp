// youngjinp20
// 2020 07

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const int MAX = 2e5+1;
const ll VMAX = 1e18;
int T, N, A, B;
ll dp[MAX][2];
char s[MAX];

int main() {
	cin >> T;

	for (int i=0; i<T; i++) {
		cin >> N >> A >> B;
		cin >> s;

		dp[0][1] = VMAX;
		dp[0][0] = B;

		for (int i=1; i<=N; i++) {
			dp[i][0] = dp[i][1] = VMAX;

			if (s[i-1] != '1' && s[i] != '1') {
				dp[i][0] = min(
					dp[i-1][0] + A + B,
					dp[i-1][1] + 2*A + B
				);
			}

			dp[i][1] = min(
				dp[i-1][0] + 2*A + 2*B,
				dp[i-1][1] + A + 2*B
			);
		}

		cout << dp[N][0] << endl;
	}


	return 0;
}
