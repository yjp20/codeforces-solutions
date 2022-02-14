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

const int MAX = 2e5+1;
ll N, X;
ll D[MAX];
ll hugs[MAX];
ll days[MAX];

int main() {
	cin >> N >> X;
	for (int i=1; i<=N; i++){
		cin >> D[i];
		days[i] = days[i-1] + D[i];
		hugs[i] = hugs[i-1] + D[i] * (D[i] + 1) / 2;
	}

	ll best;

	for (int i=1; i<=N; i++) {
		ll month, ct, left, target;

		if (days[i] < X) {
			target = days[i] - X + days[N];
			month = upper_bound(days, days+N, target) - days;
			ct = hugs[i] - hugs[month] + hugs[N];
		}
		else {
			target = days[i] - X;
			month = upper_bound(days, days+N, target) - days;
			ct = hugs[i] - hugs[month];
		}

		left = days[month] - target;
		ct += left * ( 2*D[month] - left + 1 ) / 2;
		smax(best, ct);
	}

	cout << best << endl;


	return 0;
}
