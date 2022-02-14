// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	ll  n, k, s;
	cin >> n >> k >> s;
	bool toolarge = s > (n-1)*k;
	bool toosmall = s < k;
	if (toolarge || toosmall) {
		puts("NO");
		return 0;
	}

	puts("YES");
	ll diff = s-k; // reserve 1 distance per move
	int dir = 1;
	int cur = 1;
	for (int i=0; i<k; i++) {
		ll sub = min(diff, n-2);
		diff -= sub;
		cur += dir*(sub+1);
		dir *= -1;
		printf("%d ", cur);
	}

	return 0;
}
