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

int N;
int A[101];

int main() {
	cin >> N;

	for (int i=0; i<N; i++) {
		cin >> A[i];
	}

	int best = 1e9;
	for (int i=0; i<N; i++) {
		best = min(best, abs(A[(i+1)%N]-A[i]));
	}

	for (int i=0; i<N; i++) {
		if (best == abs(A[(i+1)%N]-A[i])) {
			cout << i+1 << " " << (i+1)%N + 1;
			return 0;
		}
	}

	return 0;
}
