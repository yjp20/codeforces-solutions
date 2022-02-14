// youngjinp20
// 2019 08

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

struct choice {
	int a, b, c, d;
	bool two;
};

int n;
int a[2000];
int best=1e9;
vector<choice> C;

int main() {
	cin >> n;
	map<int,vi> M;
	for (int i=0; i<n; i++) {
		cin >> a[i];
		auto it = M.emplace(a[i], vector<int>{});
		it.first->second.push_back(i);
	}
	for (auto v : M) {
		vi &vv = v.second;
		if (vv.size() >= 2) {
			choice c = {vv[0], vv[1], vv[vv.size()-2], vv[vv.size()-1], vv.size() == 2};
			C.push_back(c);
		}
	}
	for (int l=0; l<n; l++) {
		bool nope = false;
		int r=-1;
		for (auto y : C) {
			if (l <= y.a) r = max(y.c, r);
			if (y.a<l && l<=y.b) r = max(y.d, r);
			if (y.b<l) {
				nope = true;
				break;
			}
		}
		if (l <= r && !nope) {
			int diff = r-l+1;
			best = min(diff, best);
		}
	}
	printf("%d\n", best == 1e9 ? 0 : best);

	return 0;
}
