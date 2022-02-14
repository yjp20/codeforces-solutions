// youngjinp20
// 2021 06

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<math.h>

#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int main() {
	int T;
	cin >> T;

	for (int t=0; t<T; t++) {
		ll X, Y, A, B, sum=0;
		cin >> X >> Y >> A >> B;

		int l=0, r=1e9+1;
		if (B==A) {
			cout << min(X,Y) / A << endl;
			continue;
		}
		if (B>A) swap(A,B);
		while (r-l>1) {
			ll mid = (l+r)/2;
			ll lower = ceil((Y-A*mid) * 1.0 / (B-A));
			ll upper = floor((X-B*mid) * 1.0 / (A-B));
			if (max(lower, 0LL) <= min(upper, mid)) {
				l = mid;
			} else {
				r = mid;
			}
		}

		cout << l << endl;
	}

	return 0;
}
