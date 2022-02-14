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

const int MAX = 1e5+1;
int N, M;
int V[MAX];
ll dp1[MAX];
ll dp2[MAX];

int main() {
	cin >> N;
	for (int i=1; i<=N; i++)
		cin >> V[i];

	for (int i=1; i<=N; i++)
		dp1[i] = dp1[i-1] + V[i];

	sort(V+1, V+N+1);

	for (int i=1; i<=N; i++)
		dp2[i] = dp2[i-1] + V[i];

	cin >> M;
	for (int i=1; i<=M; i++) {
		int type, l, r;
		cin >> type >> l >> r;

		if (type == 1) {
			cout << dp1[r] - dp1[l-1] << endl;
		}
		if (type == 2) {
			cout << dp2[r] - dp2[l-1] << endl;
		}
	}

	return 0;
}
