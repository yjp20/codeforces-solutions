// youngjinp20
// 2020 05

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int main() {
	int T;
	cin >> T;

	for (int t=1; t<=T; t++) {
		int N, K;
		cin >> N >> K;
		char s[N+2];
		int next[N] = {0};
		int prev[N] = {0};
		scanf("%s", (s+1));

		int global_ct = 0;

		for (int i=1; i<=N; i++) {
			global_ct += s[i] == '1';
		}

		int best=1e9;

		for (int j=1; j<=N; j++) {
			if (j-k > 0 && s[j] == s[j-K])
				prev[j] = prev[j-K];
			else
				prev[j] = j-1;
		}

		for (int j=N; j>=1; j--) {
			if (j+k <= N && s[j] == s[j+K])
				next[j] = next[j+K];
			else
				next[j] = j+1;
		}

		for (int i=1; i<=K; i++) {
			int l=1;
			int r=N;

			if (s[r] == '0') r = prev[r];
			if (s[l] == '0') l = next[l];

			while (l<=r) {
				int move_left = next[l] - l;
				int move_right = r - prev[r];
				bool moved = false;

				if (move_left < move_right) {
					if (next[l] - l < next[next[l]] - next[l]

				}

			}

			int moves = global_ct;
			for (int j=i; j<=N; j+=K) {
				bool inv = j <= l || r <= j;
				if (!inv) {
					moves -= (loc[i][j] == '1');
					moves += (loc[i][j] == '0');
				}
			}
			smin(best, moves);
		}

		cout << best << endl;
	}


	return 0;
}
