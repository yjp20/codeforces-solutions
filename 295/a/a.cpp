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

struct operation {
	int l, r;
 	ll d;
};

const int MAX = 1e5;
int N, M, K;
int A[MAX];
operation op[MAX];
vector< pair<int, ll> > c1;
vector< pair<int, ll> > c2;

int main() {
	cin >> N >> M >> K;
	for (int i=0; i<N; i++) {
		cin >> A[i];
	}

	for (int i=0; i<M; i++) {
		int l, r, d;
		cin >> l >> r >> d;
		l--;
		r--;
		op[i] = {l, r, d};
	}

	for (int i=0; i<K; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		c1.push_back({x, 1});
		c1.push_back({y+1, -1});
	}

	sort(c1.begin(), c1.end());

	int it = 0;
	ll cur = 0;
	for (int i=0; i<M; i++) {
		while (c1[it].first <= i && it < 2*K) {
			cur += c1[it++].second;
		}
		c2.push_back({op[i].l,   (ll) cur * op[i].d});
		c2.push_back({op[i].r+1, (ll) cur * op[i].d * -1});
	}

	sort(c2.begin(), c2.end());

	it = 0;
	cur = 0;
	for (int i=0; i<N; i++) {
		while (c2[it].first <= i && it < 2*M) {
			cur += c2[it++].second;
		}
		cout << cur + A[i] << " ";
	}

	return 0;
}
