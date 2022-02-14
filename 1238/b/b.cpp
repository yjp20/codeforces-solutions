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
	int q;
	cin >> q;
	for (int i=0; i<q; i++) {
		int n, r, it=0;
		int x[100001];
		cin >> n >> r;
		for (int j=0; j<n; j++) {
			cin >> x[j];
		}
		sort(x, x+n);
		for (int j=n-1; j>=0; j--) {
			if (j != n-1 && x[j] == x[j+1]) continue;

			if (x[j] > it*r) it ++;
			else break;
		}
		printf("%d\n", it);
	}

	return 0;
}
