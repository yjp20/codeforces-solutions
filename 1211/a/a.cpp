// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int N;

int main() {
	cin >> N;
	vi A;
	for (int i=0; i<N; i++) {
		int t;
		cin >> t;
		A.push_back(t);
	}

	int m = 0;
	int ans[3] = {-1, -1, -1};
	for (int j=0; j<3; j++) {
		int best = -1;
		for (int i=0; i<N; i++) {
			if (A[i] > m && (best == -1 || A[i] < A[best])) {
				best = i;
			}
		}
		if (best == -1) {
			puts("-1 -1 -1");
			return 0;
		}
		m = A[best];
		ans[j] = best+1;
	}
	printf("%d %d %d\n", ans[0], ans[1], ans[2]);

	return 0;
}
