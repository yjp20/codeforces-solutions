// youngjinp20
// 2020 01

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	std::ios::sync_with_stdio(false);
	int t;
	ll a[100005];
	cin >> t;
	for (int c=0; c<t; c++) {
		int n;
		bool flag = false;
		cin >> n;
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		ll s1 = 0;
		for (int i=0; i<n; i++) {
			s1 += a[i];
			if (s1 <= 0) flag = true;
		}
		ll s2 = 0;
		for (int i=n-1; i>=0; i--) {
			s2 += a[i];
			if (s2 <= 0) flag = true;
		}
		printf(flag ? "NO\n" : "YES\n");
	}

	return 0;
}
