// youngjinp20
// 2020 06

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const int MAX = 2e5;
int N;
int A[MAX];
int B[MAX];
int diffs[MAX];

int main() {

	cin >> N;

	for (int i=0; i<N; i++) cin >> A[i];
	for (int i=0; i<N; i++) cin >> B[i];
	for (int i=0; i<N; i++) diffs[i] = A[i] - B[i];

	sort(diffs, diffs+N);

	ll ct = 0;

	for (int i=0; i<N; i++) {
		int idx = upper_bound(diffs, diffs+N, -diffs[i]) - diffs;
		int val = N - max(idx, i+1);
		ct += val;
	}

	cout << ct;

	return 0;
}
