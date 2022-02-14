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
	int n, m=0;
	int ct=0;
	cin >> n;
	for (int i=0; i<n; i++) {
		int a, b;
		cin >> a >> b;
		ct += b - a;
		m = max(m, ct);
	}

	cout << m;

	return 0;
}
