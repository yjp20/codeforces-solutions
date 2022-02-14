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

struct _ {
	int l, r;
	bool operator<(const _ &o) const {
		if (r-l != o.r-o.l) return r-l < o.r-o.l;
		return l > o.l;
	}
};

int main() {
	int T;
	cin >> T;

	for (int t=1; t<=T; t++) {
		int N;
		cin >> N;
		int ans[N+1] = {0};

		priority_queue<_> Q;
		Q.push({1, N});

		int i = 0;
		while (!Q.empty()) {
			_ top = Q.top();
			Q.pop();

			int m = (top.r+top.l)/2;
			ans[m] = ++i;

			if (top.l <= m-1) Q.push({top.l, m-1});
			if (m+1 <= top.r) Q.push({m+1, top.r});
		}

		for (int j=1; j<=N; j++) {
			cout << ans[j] << " ";
		}
		cout << endl;
	}

	return 0;
}
