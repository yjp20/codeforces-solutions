// youngjinp20
// 2020 01

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int n, m, q;
	cin >> n >> m;
	char s[30][12], t[30][12];
	for (int i=0; i<n; i++) cin >> s[i];
	for (int i=0; i<m; i++) cin >> t[i];
	cin >> q;
	for (int i=0; i<q; i++) {
		int y;
		cin >> y;
		y --;
		cout << s[y%n] << t[y%m] << "\n";
	}

	return 0;
}
