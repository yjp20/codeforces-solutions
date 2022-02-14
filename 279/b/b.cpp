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

const int MAX = 1e5+1;
int N, T;
int A[MAX];

int main() {
	cin >> N >> T;

	int sum = 0;
	for (int i=1; i<=N; i++) {
		int t;
		cin >> t;
		sum += t;
		A[i] = sum;
	}

	int best = 0;
	for (int i=0; i<N; i++) {
		int idx = upper_bound(A, A+N+1, A[i]+T) - A - i - 1;
		best = max(best, idx);
	}

	cout << best;

	return 0;
}
