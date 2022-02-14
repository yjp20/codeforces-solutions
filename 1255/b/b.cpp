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
	int t;
	cin >> t;
	for (int i=0; i<t; i++) {
		int n, m;
		pi a[2205];
		int sum=0;
		cin >> n >> m;
		for (int i=0; i<n; i++) {
			a[i].second = i;
			cin >> a[i].first;
			sum += a[i].first*2;
		}
		if (m < n || n == 2) {
			puts("-1");
			continue;
		}
		sort(a, a+n);
		sum += (m-n) * (a[0].first + a[1].first);

		printf("%d\n", sum);

		for (int i=0; i<n; i++) {
			printf("%d %d\n", i+1, (i+1)%n + 1);
		}
		for (int i=0; i<m-n; i++) {
			printf("%d %d\n", a[0].second+1, a[1].second+1);
		}
	}

	return 0;
}
