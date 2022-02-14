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

const int MOD = 1e9+7;
int X, Y, N, ans;

int main() {
	cin >> X >> Y >> N;

	switch (N%6) {
		case 1:
			ans = X;
			break;
		case 2:
			ans = Y;
			break;
		case 3:
			ans = Y-X;
			break;
		case 4:
			ans = -X;
			break;
		case 5:
			ans = -Y;
			break;
		case 0:
			ans = X-Y;
			break;
	}

	ans %= MOD;
	cout << ( (ans + MOD) % MOD );

	return 0;
}
