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

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 131072;
int N, M, K;
int st=1;
int T[MAX*2][5];

int query(int l, int r, int j) {
	l += st;
	r += st;
	int best = 0;
	for (; l < r; l/=2, r/=2) {
		if (l&1) best = max(best, T[l++][j]);
		if (r&1) best = max(best, T[--r][j]);
	}
	return best;
}

int main() {
	cin >> N >> M >> K;
	while (st < N) st <<= 1;

	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			cin >> T[st+i][j];
		}
	}

	for (int i=st-1; i>0; i--) {
		for (int j=0; j<M; j++) {
			T[i][j] = max(T[2*i][j], T[2*i+1][j]);
		}
	}

	int best = -1;
	int best_vals[5] = {0};

	for (int i=0; i<N; i++) {
		int l=i, r=N;
		int vals[5] = {0};

		while (l < r) {
			int mid = (l+r) / 2;
			for (int j=0; j<M; j++) {
				vals[j] = query(i, mid + 1, j);
			}

			int sum = 0;
			for (int j=0; j<M; j++) sum += vals[j];
			if (sum > K) r = mid;
			else {
				l = mid + 1;
				if (mid-i > best) {
					best = mid-i;
					for (int j=0; j<M; j++) best_vals[j] = vals[j];
				}
			}
		}
	}

	for (int i=0; i<M; i++) cout << best_vals[i] << " ";
	cout << endl;

	return 0;
}
