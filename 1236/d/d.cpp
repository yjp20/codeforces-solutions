// youngjinp20
// 2019 10

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

const int MAX = 100005;

bool used[MAX] = {0};
vector<int> row[MAX];
vector<int> col[MAX];
vector<int> row_rev[MAX];
vector<int> col_rev[MAX];

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	for (int i=0; i<k; i++) {
		int x, y;
		cin >> x >> y;
		row[x].push_back(y);
		col[y].push_back(x);
		row_rev[x].push_back(y);
		col_rev[y].push_back(x);
	}

	for (int i=0; i<n; i++) {
		sort(row[i].begin(), row[i].end());
		sort(row_rev[i].begin(), row_rev[i].end(), greater<int>());
	}

	for (int i=0; i<m; i++) {
		sort(col[i].begin(), col[i].end());
		sort(col_rev[i].begin(), col_rev[i].end(), greater<int>());
	}

	int dir=0;
	int x=1, y=1;
	int l=1, r=n;
	int t=1, b=m;
	ll ct=1;

	while (l<r && t<b) {
		if (dir == 0) {
			auto it = upper_bound(row[x].begin(), row[x].end(), y);
			if (it != row[x].end()) {
				r = max(*it-2, l);
			} else r = r-1;
			ct += r-y+1;
			y = r;
		}
		if (dir == 1) {
			auto it = upper_bound(col[y].begin(), col[y].end(), x);
			if (it != col[y].end()) {
				b = max(*it-2, t);
			} else b = b-1;
			ct += b-x+1;
			x = b;
		}
		if (dir == 2) {
			auto it = upper_bound(row_rev[x].begin(), row_rev[x].end(), y);
			if (it != row_rev[x].end()) {
				l = min(*it+2, r);
			} else l = l+1;
			ct += y-r+1;
			y = l;
		}
		if (dir == 3) {
			auto it = upper_bound(col_rev[y].begin(), col_rev[y].end(), x);
			if (it != col_rev[y].end()) {
				t = min(*it+2, b);
			} else b = b+1;
			ct += x-b+1;
			x = t;
		}
 		printf("%d %d %d %d %d %d\n", x, y, r, l, b, t);
		dir ++;
	}

	printf("%d\n%lld\n", n*m-k, ct);
	puts("Yes");
	return 0;
}
