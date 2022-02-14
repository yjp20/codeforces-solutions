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
	int N, A, R, M;
	cin >> N >> A >> R >> M;
	int H[N];
	for (int i=0; i<N; i++) {
		cin >> H[i];
	}

	int l=0, r=1e9;
	while (l <= r) {
		int m = (l+r)/2;
		int above=0, below=0;

		for (int i=0; i<N; i++) {
			int diff = m - H[i];
			if (diff > 0) above += diff;
			if (diff < 0) below += -diff;
		}
	}

	return 0;
}
