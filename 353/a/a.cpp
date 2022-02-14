// youngjinp20
// 2020 06

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const int MAX = 100;
const int INF = 1e9;
int N;
int a, b, c;

int main() {
	cin >> N;

	for (int i=1; i<=N; i++) {
		int X, Y;
		cin >> X >> Y;
		a ^= X&1;
		b ^= Y&1;
		if ((X&1) != (Y&1))
			c ++;
	}

	if (a != b) {
		cout << -1;
		return 0;
	}

	if (!a && !b) {
		cout << 0;
		return 0;
	}

	if (a && b) {
		if (c) {
			cout << 1;
			return 0;
		}
		else {
			cout << -1;
			return 0;
		}
	}

	return 0;
}
