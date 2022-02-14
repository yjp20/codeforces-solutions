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
		int x, y;
		cin >> x >> y;
		if (x >= y) puts("YES");
		else if (x == 1 && y > 1) puts("NO");
		else if (x == 2 && y > 3) puts("NO");
		else if (x == 3 && y > 3) puts("NO");
		else puts("YES");
	}

	return 0;
}
