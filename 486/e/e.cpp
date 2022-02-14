// youngjinp20
// 2021 07

#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<numeric>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;
typedef pair<int, ll> pa;

const int MAX = 1 << 17;
const int MOD = 1e9 + 7;

int N;
ll A[MAX];

int order[MAX];
int o2[MAX];
ll st = 1;
pa t1[2*MAX], t2[2*MAX];
pa after[MAX], before[MAX];

pa get_max(pa a, pa b) {
	if (a.first > b.first) return a;
	if (a.first < b.first) return b;
	return { a.first, (a.second + b.second) % MOD};
}

void update(pa *tree, int idx, pa value) {
	idx += st;
	tree[idx] = value;
	idx /= 2;
	while (idx) {
		tree[idx] = get_max(tree[2*idx], tree[2*idx+1]);
		idx /= 2;
	}
}

pa query(pa *tree, int l, int r) {
	pa best = { 0, 1 };
	for (l+=st, r+=st; l < r; l /= 2, r /= 2) {
		if (l&1) best = get_max(best, tree[l++]);
		if (r&1) best = get_max(best, tree[--r]);
	}
	return best;
}

int main() {
	cin >> N;

	while (st < N) st <<= 1;
	for (int i=0; i<N; i++) {
		cin >> A[i];
	}

	iota(order, order+N, 0);
	stable_sort(order, order+N, [](int a, int b) {
		if (A[a] == A[b]) return b < a;
		return A[a] < A[b];
	});

	for (int i=0; i<N; i++) {
		before[order[i]] = query(t1, 0, order[i]);
		update(t1, order[i], {before[order[i]].first+1, before[order[i]].second});
	}

	for (int i=N-1; i>=0; i--) {
		after[order[i]] = query(t2, order[i]+1, N);
		update(t2, order[i], {after[order[i]].first+1, after[order[i]].second});
	}

	int best = 0;
	for (int i=0; i<N; i++) {
		best = max(best, before[i].first + 1);
	}

	ll best_num = 0;
	for (int i=0; i<N; i++) {
		if (before[i].first == best - 1) {
			best_num += before[i].second;
			best_num %= MOD;
		}
	}

	for (int i=0; i<N; i++) {
		if (before[i].first + after[i].first + 1 < best) cout << 1;
		else if ((before[i].second * after[i].second) % MOD == best_num) cout << 3;
		else cout << 2;
	}

	return 0;
}
