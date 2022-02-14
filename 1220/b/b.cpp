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
	std::ios::sync_with_stdio(false);
	int n;
	long long m[1001][1001];
	cin >> n;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cin >> m[i][j];
		}
	}
	long long zero = sqrtl(m[0][1]*m[0][2]/m[1][2]);
	printf("%lld ", zero);
	for (int i=1; i<n; i++) {
		long long res = m[i][0] / zero;
		printf("%lld ", res);
	}
	return 0;
}
