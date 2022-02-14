// youngjinp20
// 2021 08

#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 1e5;
int N, M;
int cells[MAX*2];
int tree[MAX*2][20];
int updates[MAX*2][20];

int get(int x, int b) {
	if (x == 0) return 0;
	get(x/2, b);
	if (x < N) {
		updates[x*2][b] ^= updates[x][b];
		updates[x*2+1][b] ^= updates[x][b];
	}
	if (updates[x][b]) {
		tree[x][b] = cells[x] - tree[x][b];
		updates[x][b] = 0;
	}
	return tree[x][b];
}

int query(int l, int r, int b) {
	l += N;
	r += N;
	int sum = 0;
	while (l < r) {
		if (l&1) sum += get(l++, b);
		if (r&1) sum += get(--r, b);
		l /= 2;
		r /= 2;
	}
	return sum;
}

void update(int x, int b) {
	get(x, b);
	updates[x][b] ^= 1;
	if (!updates[x][b]) return;
	int change = cells[x] - 2*tree[x][b];
	while (x /= 2) {
		tree[x][b] += change;
	}
}

void modify(int l, int r, int b) {
	l += N;
	r += N;
	while (l < r) {
		if (l&1) update(l++, b);
		if (r&1) update(--r, b);
		l /= 2;
		r /= 2;
	}
}

int main() {
	cin >> N;
	for (int i=0; i<N; i++) {
		int tmp;
		cin >> tmp;
		for (int j=0; j<20; j++) {
			tree[N+i][j] = (tmp >> j) & 1;
		}
		cells[i+N] = 1;
	}

	for (int i=N-1; i>0; i--) {
		cells[i] = cells[2*i] + cells[2*i+1];
		for (int j=0; j<20; j++) {
			tree[i][j] = tree[i*2][j] + tree[i*2+1][j];
		}
	}

	cin >> M;

	for (int i=0; i<M; i++) {
		int q;
		cin >> q;
		if (q == 1) {
			int l, r;
			cin >> l >> r;
			l --; r --;
			ll sum = 0;
			for (int j=0; j<20; j++) {
				sum += (1LL << j) * query(l, r+1, j);
			}
			cout << sum << endl;
		}
		if (q == 2) {
			int l, r, x;
			cin >> l >> r >> x;
			l --; r --;
			for (int j=0; j<20; j++) {
				if ((x>>j)&1) modify(l, r+1, j);
			}
		}
	}

	return 0;
}
