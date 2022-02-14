// youngjinp20
// 2019 10

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int t;
	cin >> t;
	for (int i=0; i<t; i++) {
		ll x, y;
		cin >> x >> y;
		ll diff = x-y;
		if (abs(diff) <= 1) {
			puts("NO");
		}
		else {
			puts("YES");
		}
	}

	return 0;
}
