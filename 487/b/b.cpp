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

const int MAX = 1e5 + 5;
const int MAX_E = 18;
const int INF = -1;
int N, S, L;
int mi[MAX][MAX_E];
int ma[MAX][MAX_E];
int f[MAX];
int dp[MAX];

int l2(int x) {
	return 31 - __builtin_clz(x);
}

int getdiff(int l, int r) {
	if (l > r) return 0;
	int diff = r-l+1;
	int e = l2(diff);
	int x = 1<<e;
	return max( ma[l][e], ma[r-x+1][e] ) - min( mi[l][e], mi[r-x+1][e] );
}

int main() {
	cin >> N >> S >> L;

	for (int i=1; i<=N; i++) {
		int t;
		cin >> t;
		mi[i][0] = ma[i][0] = t;
	}

	for (int j=1; j<MAX_E; j++) {
		for (int i=1; i<=N; i++) {
			mi[i][j] = mi[i][j-1];
			ma[i][j] = ma[i][j-1];
			if (i+(1<<j-1) <= N) {
				smin(mi[i][j], mi[i+(1<<(j-1))][j-1]);
				smax(ma[i][j], ma[i+(1<<(j-1))][j-1]);
			}
		}
	}

	/* for (int i=1; i<=N; i++) { */
	/* 	for (int j=0; j<5; j++) { */
	/* 		cout << imie(i) imie(j) imie(mi[i][j]) << endl; */
	/* 	} */
	/* } */

	int r=1;
	for (int i=1; i<=N; i++) {
		while (r <= N && getdiff(i, r) <= S) {
			f[r] = r-i+1;
			r ++;
		}
	}

	int s=0;
	dp[0] = 0;
	for (int i=1; i<=N; i++) {
		dp[i] = INF;
	}
	for (int i=1; i<=N; i++) {
		for (int d=max(i-f[i],s); d<=i-L; d++) {
			if (dp[max(d,0)] != INF) {
				dp[i] = dp[max(d, 0)] + 1;
//				s = d;
				break;
			}
		}
		/* cout << imie(i) imie(dp[i]) imie(f[i]) imie(s) << endl; */
	}

	cout << dp[N];

	return 0;
}
