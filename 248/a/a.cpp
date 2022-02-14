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
	int n;
	int l=0, r=0;
	cin >> n;
	for (int i=0; i<n; i++) {
		int x, y;
		cin >> x >> y;
		l += x;
		r += y;
	}

	cout << min(l, n-l) + min(r, n-r);

	return 0;
}
