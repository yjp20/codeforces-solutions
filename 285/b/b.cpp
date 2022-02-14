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

const int MAX = 1e5+1;
int N, S, T;
int P[MAX];

int main() {
	cin >> N >> S >> T;
	for (int i=1; i<=N; i++) {
		cin >> P[i];
	}

	int it = S;

	for (int i=0; i<N; i++) {
		if (it == T) {
			cout << i;
			return 0;
		}
		it = P[it];
	}

	cout << -1;

	return 0;
}
