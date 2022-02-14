// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

struct pi {
	int first, second, val;
};

bool ps_1(pi a, pi b) {
	if (a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}

bool ps_2(pi a, pi b) {
	return a.second < b.second;
}

int main() {
	std::ios::sync_with_stdio(false);
	int T;
	scanf("%d\n", &T);
	for (int t=0; t<T; t++) {
		vector<pi> X;
		int n; scanf("%d\n", &n);
		for (int i=0; i<n; i++) {
			int tmp; scanf("\n%1d\n", &tmp);
			X.push_back({tmp,i});
		}
		sort(X.begin(), X.end(), ps_1);
		for (int i=0; i<n; i++) {
			printf("%2d ", X[i].first);
		}
		puts("");
		for (int i=0; i<n; i++) {
			printf("%2d ", X[i].second);
		}
		puts("");
		int l = 1;
		int cur = -1;
		for (int i=0; i<n; i++) {
			X[i].val = l;
			cur = X[i].second;
		}
		if (l>2) puts("-");
		else {
			sort(X.begin(), X.end(), ps_2);
			for (auto x : X) {
				printf("%d", x.val);
			}
			puts("");
		}
	}

	return 0;
}

