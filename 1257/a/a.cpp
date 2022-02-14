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
	while (t--) {
		int n, x, a, b;
		cin >> n >> x >> a >> b;
		if (a>b) swap(a,b);
		cout << min(n-1,b-a+x) << "\n";
	}

	return 0;
}
