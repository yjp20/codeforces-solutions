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

const int MAX = 1e3+1;
int N;
int best;
int a[MAX];

int main() {
	cin >> N;

	for (int i=0; i<N; i++) {
		int t;
		cin >> t;
		best = max(best, ++a[t]);
	}

	cout << (best <= (N+1)/2 ? "YES" : "NO");

	return 0;
}
