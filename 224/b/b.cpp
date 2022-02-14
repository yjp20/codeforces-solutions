// youngjinp20
// 2020 04

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
using namespace std;

typedef long long ll;

const int MAX = 1e5+1;
int N, K;
int A[MAX];
int ct[MAX];
int distinct;

int main() {
	cin >> N >> K;
	for (int i=0; i<N; i++) {
		cin >> A[i];
		if (!ct[A[i]] ++) {
			distinct ++;
		}
	}

	if (distinct < K) {
		cout << "-1 -1" << endl;
		return 0;
	}

	int l, r;

	for (l=0; l<N; l++) {
		if (ct[A[l]] == 1 && distinct == K) break;
		if (ct[A[l]] == 1 && distinct > K) distinct --;
		ct[A[l]] --;
	}

	for (r=N-1; r>=0; r--) {
		if (ct[A[r]] == 1) break;
		ct[A[r]] --;
	}

	cout << l+1 << " " << r+1;

	return 0;
}
