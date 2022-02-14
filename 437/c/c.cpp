// youngjinp20
// 2020 07

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int N, M;
int V[1005];
int sum;

int main() {
	cin >> N >> M;

	for (int i=1; i<=N; i++) {
		cin >> V[i];
	}

	for (int i=0; i<M; i++) {
		int x, y;
		cin >> x >> y;
		sum += min(V[x], V[y]);
	}

	cout << sum;

	return 0;
}
