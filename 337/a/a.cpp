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

const int MAX = 1000;
int N, M;
int A[MAX];

int main() {
	cin >> N >> M;
	N--;

	for (int i=0; i<M; i++)
		cin >> A[i];

	sort(A, A+M);
	int best = 1e9;

	for (int i=0; i<M-N; i++) {
		best = min(A[i+N] - A[i], best);
	}

	cout << best;

	return 0;
}
