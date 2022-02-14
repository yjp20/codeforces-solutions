// youngjinp20
// 2019 11

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int k;
	cin >> k;
	for (int t=0; t<k; t++) {
		int n;
		int a[1000];
		int best = 0;
		cin >> n;
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		sort(a, a+n, greater<int>());
		for (int i=0; i<n; i++) {
			best = max(best, min(i+1, a[i]));
		}
		cout << best << "\n";
	}
	return 0;
}
