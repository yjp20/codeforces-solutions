// youngjinp20
// 2020 04

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
using namespace std;

typedef long long ll;

int N;
int A[105];
int dp[105];

int main() {
	cin >> N;
	int ct = 0;
	int sum = 0;
	for (int i=0; i<N; i++) {
		cin >> A[i];
		ct += A[i];
		sum += A[i] ? -1 : 1;
		dp[i] = sum;
	}

	int best = -1;
	for (int i=0; i<N; i++) {
		for (int j=i; j<N; j++) {
			smax(best, dp[j] - dp[i-1]);
		}
	}

	cout << ct + best;

	return 0;
}
