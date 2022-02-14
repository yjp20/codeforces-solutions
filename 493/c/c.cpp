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

const int MAX = 2e5;
int N, M;
vector<pair<int,int>> V;

int main() {
	cin >> N;
	for (int i=0; i<N; i++) {
		int t;
		cin >> t;
		V.push_back({t, 1});
	}
	cin >> M;
	for (int i=0; i<M; i++) {
		int t;
		cin >> t;
		V.push_back({t, -1});
	}

	sort(V.begin(), V.end(), [](pair<int,int> &a, pair<int,int> &b) {
		if (a.first == b.first) return a.second < b.second;
		return a.first > b.first;
	});

	int best = 0;
	int ct = 0;
	int x = 0;
	int y = 0;
	int a = 0;
	int b = 0;

	for (auto e : V) {
		ct += e.second;
		(e.second == 1 ? a : b) ++;
		if (best <= ct) {
			best = ct;
			x = a;
			y = b;
		}
	}

	printf("%d:%d\n", 2*N+x, 2*M+y);

	return 0;
}
