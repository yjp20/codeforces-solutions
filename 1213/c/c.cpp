// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int Q;

int main() {
	cin >> Q;
	for (int t=0; t<Q; t++) {
		ll n, m, sum=0;
		cin >> n >> m;
		for (int i=0; i<10; i++) {
			ll add = (i*m)%10;
			ll avail = n/m-i;
			if (avail >= 0) {
				sum += add * (avail/10+1);
			}
		}
		cout << sum << "\n";
	}
	return 0;
}
