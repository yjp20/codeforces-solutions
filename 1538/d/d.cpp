// youngjinp20
// 2021 06

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<numeric>


#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int factor(int x) {
	int res = 0;
	for (int i=2; i*i<=x; i++) {
		while (x % i == 0) {
			res ++;
			x /= i;
		}
	}
	if (x > 1) res ++;
	return res;
}

int main() {
	int T;
	cin >> T;

	for (int t=0; t<T; t++) {
		int A, B, K;
		cin >> A >> B >> K;
		int common = gcd(A, B);
		ll g = factor(common);
		ll a = factor(A / common);
		ll b = factor(B / common);

		ll lower = (a != 0) + (b != 0);
		ll upper = 2*g + a + b;
		if (
			(a == 0 && b == 0 && K == 1)
		) {
			cout << "NO" << endl;
			continue;
		}
		cout << ((lower <= K && K <= upper) ? "YES" : "NO") << endl;
	}

	return 0;
}
