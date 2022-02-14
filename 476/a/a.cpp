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
	int N, M;
	cin >> N >> M;

	if (N < M) {
		cout << -1 << endl;
		return 0;
	}

	int ct = N - N/2;
	for (int i=0; i<M; i++) {
		if ((ct+i)%M == 0) {
			cout << ct+i << endl;
			return 0;
		}
	}

	return 0;
}
