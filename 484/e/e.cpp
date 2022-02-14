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

const int MAX = 2e5+1;
const int MAC = 2e6+1;
int N;
int A[MAX];
int dp[MAC];
int M;

int main() {
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> A[i];
		dp[A[i]] = A[i];
		M = max(M, A[i]);
	}

	for (int i=1; i<MAC; i++) {
		if (!dp[i]) dp[i] = dp[i-1];
	}

	sort(A, A+N);

	int best = 0;
	for (int i=N-1; i>=0 && A[i] > best; i--) {
		for (int j=2; (ll) A[i] * j <= 2*M; j++) {
			ll a = (ll) A[i] * j;
			best = max(dp[a]%A[i], best);
		}
	}

	cout << best;

	return 0;
}
