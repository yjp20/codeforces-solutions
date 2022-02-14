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

const int MAX = 1e5;
int N, M;
int dp[MAX];

int main() {
	cin >> N >> M;

	for (int i=0; i<M; i++) {
		int a, b, c;
		int used[3] = {};
		cin >> a >> b >> c;
		a--;
		b--;
		c--;

		if (dp[a]) used[dp[a] - 1] = true;
		if (dp[b]) used[dp[b] - 1] = true;
		if (dp[c]) used[dp[c] - 1] = true;

		for (auto x : {a, b, c}) {
			if (dp[x]) continue;

			for (int j=0; j<3; j++) {
				if (!used[j]) {
					used[j] = true;
					dp[x] = j+1;
					break;
				}
			}
		}
	}

	for (int i=0; i<N; i++) {
		cout << dp[i] << " ";
	}

	return 0;
}
