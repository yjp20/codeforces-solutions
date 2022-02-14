// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int res[200050];
int inp[200050];

int main() {
	std::ios::sync_with_stdio(false);
	int T;
	scanf("%d\n", &T);
	for (int t=0; t<T; t++) {
		int n; scanf("%d\n", &n);
		int l=0, u=0, uu=0;
		bool flag = false;
		bool impossible = false;

		for (int i=0; i<n; i++) {
			char tmp;
			scanf("\n%c", &tmp);
			inp[i] = tmp - '0';
			int x = inp[i];

			// MODE 1
			if (!flag) {
				if (x >= l) l = x;
				else {
					int mi=10, ma=0;
					for (int j=i-1; j>=0; j--) {
						if (inp[j] > inp[i]) {
							mi = min(inp[j], mi);
							ma = max(inp[j], ma);
							res[j] = 2;
						}
					}
					l = x;
					u = ma;
					uu = mi;
					flag = true;
				}
				res[i] = 1;
			}

			// MODE 2
			else {
				if (x >= u) {
					u = x;
					res[i] = 2;
				}
				else if (l <= x && x <= uu) {
					l = x;
					res[i] = 1;
				}
				else {
					impossible = true;
				}
			}
		}

		if (impossible) cout << "-";
		else {
			for (int j=0; j<n; j++) {
				cout << res[j];
			}
		}
		cout << "\n";
	}

	return 0;
}
