// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

struct _A {
	int p, t;
	bool operator<(const _A &other) const {
		if (p == other.p) return t < other.t;
		return p > other.p;
	}
};

typedef long long ll;
int n, k;
vector<_A> A;

int main() {
	cin >> n >> k;
	for (int i=0; i<n; i++) {
		int p, t;
		cin >> p >> t;
		A.push_back({p,t});
	}

	sort(A.begin(), A.end());
	auto val = A[k-1];
	int res = upper_bound(A.begin(), A.end(), val) - lower_bound(A.begin(), A.end(), val);
	cout << res;

	return 0;
}
