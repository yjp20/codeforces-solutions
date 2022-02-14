// youngjinp20
// 2020 04

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
using namespace std;

typedef long long ll;

const int MAX = 5000 + 1;
int N;
int a[MAX];

int solve(int l, int r, int h) {
	if (l > r) return 0;
	if (l == r) return 1;

	vector<int> v;
	int m = 1e9;
	for (int i=l; i<=r; i++) {
		if (smin(m, a[i])) v.clear();
		if (m == a[i]) v.push_back(i);
	}
	int sum = m-h;

	sum += solve(l, v[0]-1, m);
	for (int i=0; i+1<v.size(); i++) {
		sum += solve(v[i]+1, v[i+1]-1, m);
	}
	sum += solve(v[v.size()-1]+1, r, m);

	return min(sum, r-l+1);
}

int main() {
	cin >> N;
	for (int i=1; i<=N; i++) cin >> a[i];
	cout << solve(1, N, 0);

	return 0;
}
