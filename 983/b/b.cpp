// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int n, q;
int a[5001][5001];
int b[5001][5001];

int main() {
	cin >> n;
	for (int i=0; i<n; i++) {
		int t;
		cin >> a[0][i];
		b[0][i] = a[0][i];
	}
	for (int i=1; i<n; i++) {
		for (int j=0; j<n-i; j++) {
			a[i][j] = a[i-1][j] ^ a[i-1][j+1];
			b[i][j] = max(a[i][j], max(b[i-1][j], b[i-1][j+1]));
		}
	}
	cin >> q;
	for (int i=0; i<q; i++) {
		int l, r;
		cin >> l >> r;
		printf("%d\n", b[r-l][l-1]);
	}

	return 0;
}
