// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int MAX = 2e5+1;
	int n, a[MAX];
	int u=0, v=0;
	int flag = 1;
	cin >> n;
	a[0] = 1;
	u ++;
	for (int i=1; i<=n; i++) {
		int t; cin >> t;
		if (t < 0) flag *= -1;
		a[i] = flag;
		if (a[i] == 1) u++;
		if (a[i] == -1) v++;
	}
	ll neg=0, pos=0;
	for (int i=0; i<=n; i++) {
		if (a[i] == 1) {
			u --;
			pos += u;
			neg += v;
		}
		if (a[i] == -1)	{
			v --;
			pos += v;
			neg += u;
		}
	}
	printf("%lld %lld\n", neg, pos);
	return 0;
}
