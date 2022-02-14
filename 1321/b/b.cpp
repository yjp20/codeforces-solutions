// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define pb push_back

typedef long long ll;

const int MAX = 4e5;
int n;
int b[MAX];
ll ct[MAX*3+10];

int main() {
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> b[i];
	}

	for (int i=0; i<n; i++) {
		int idx = b[i] - i + 2e5;
		ct[idx] += b[i];
	}

	ll best = 0;
	for (int i=0; i<MAX*3+10; i++) {
		best = max(best, ct[i]);
	}

	printf("%lld", best);

	return 0;
}
