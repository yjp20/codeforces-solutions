// youngjinp20
// 2021 07

#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>
#include<numeric>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

struct asdf {
	int l, r, w, p;
};

const int MAX = 3e5;
int N, M;
asdf K[MAX];
int t[MAX*2];
int order[MAX];

void update(int p, int v) {
	p += N;
	t[p] = v;
	p /= 2;
	while (p) {
		t[p] = max(t[p/2], t[p/2+1]);
		p /= 2;
	}
}

int query(int l, int r) {
  int res = -1;
  for (l += N, r += N; l < r; l >>= 1, r >>= 1) {
    if (l&1) res = max(res, t[l++]);
    if (r&1) res = max(res, t[--r]);
  }
  return res;
}

int main() {
	cin >> N >> M;

	vector<pair<int, int>> events;
	for (int i=0; i<N; i++) {
		cin >> K[i].l >> K[i].r >> K[i].w;
		events.push_back({K[i].l, i});
		events.push_back({K[i].r, i+N});
	}

	sort(events.begin(), events.end());
	iota(order, order+N, 0);
	stable_sort(order, order+N, [](int a, int b) {
		if (K[a].w == K[b].w) return K[a].l < K[b].l;
		return K[a].w < K[b].w;
	});

	for (int i=0; i<N; i++) {
		K[order[i]].p = i;
		order[i] = K[order[i]].w;
	}

	int l=0, r=1e6;

	for (int i=0; i<N; i++) {
		cout << d(i) d(order[i]) << endl;
	}

	while (r - l > 1) {
		int mid = (l+r)/2;
		bool good = false;

		for (int i=0; i<2*N; i++) {
			t[i] = -1;
		}

		cout << d(mid) << endl;

		for (auto e : events) {
			if (e.second < N) {
				if (K[e.second].l == 1) {
					update(K[e.second].p, K[e.second].w);
					cout << d(K[e.second].p) << endl;
					continue;
				}

				int low = lower_bound(order, order+N, K[e.second].w - mid) - order;
				int v = query(low, K[e.second].p);
				cout << d(low) d(v) << endl;
				update(K[e.second].p, v);
			} else {
				if (t[N+K[e.second-N].p] != -1 && K[e.second-N].r == M) {
					good = true;
				}
				update(K[e.second-N].p, -1);
			}
		}

		if (good) {
			r = mid;
		} else {
			l = mid;
		}
	}

	cout << l << endl;

	return 0;
}
