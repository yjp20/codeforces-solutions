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
	int q;
	map<int,int> lookup;
	cin >> q;
	for (int i=0; i<30; i++) {
		lookup[1<<i] = i;
	}
	for (int i=0; i<q; i++) {
		int n;
		vi a(40);
		cin >> n;
		for (int j=0; j<n; j++) {
			int t;
			cin >> t;
			a[lookup[t]]++;
		}
		for (int j=0; j<11; j++) {
			a[j+1] += a[j]/2;
		}
		printf("%s\n", a[11] > 0 ? "YES" : "NO");
	}

	return 0;
}
