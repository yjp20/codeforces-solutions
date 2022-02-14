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
int flag[MAC];
int last[MAC];
int M;

int main() {
	ios::sync_with_stdio(0);
	cin >> N;

	for (int i=0; i<N; i++) {
		int t;
		cin >> t;
		flag[t] = t;
		last[t] = t;
		smax(M, t);
	}

	for (int i=1; i<MAC; i++) {
		if (!last[i]) last[i] = last[i-1];
	}

	int best = 0;

	for (int i=M; i>=0; i--) {
		if (i < best) break;
		if (!flag[i]) continue;

		for (int j=2; i*(j-1) <= M; j++) {
			if (last[j*i-1] > i) smax(best, last[j*i-1]%i);
		}
	}

	cout << best;

	return 0;
}

