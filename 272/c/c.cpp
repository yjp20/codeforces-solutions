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

const int MAX = 1e5+5;
int N, M;
ll A[MAX];

int main() {
	cin >> N;
	for (int i=1; i<=N; i++)
		cin >> A[i];

	cin >> M;
	ll m = A[0];
	for (int i=0; i<M; i++) {
		ll W, H;
		cin >> W >> H;
		ll h = max(A[W], m);
		m = h + H;
		cout << h << endl;
	}

	return 0;
}
