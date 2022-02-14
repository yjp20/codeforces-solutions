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
	cin >> q;
	for (int i=0; i<q; i++) {
		int c, m, x;
		cin >> c >> m >> x;
		cout << min(c,min(m,(c+m+x)/3)) << "\n";
	}

	return 0;
}
