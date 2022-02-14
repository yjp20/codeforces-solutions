// youngjinp20
// 2019 11

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int r, c, k;
		int sum = 0;
		cin >> r >> c >> k;
		vvi A(r, vi(c));
		vvi B(r, vi(c));
		for (int i=0; i<r; i++) {
			for (int j=0; j<c; j++) {
				char ch;
				scanf("\n%c", &ch);
				if (ch == 'R') {
					sum ++;
					A[i][j] = 1;
				}
			}
		}
		int each = sum/k;
		int more = sum - each*k;
		int idx = 0;
		int ct = each;
		if (more > 0) {
			ct ++;
			more --;
		}
		for (int i=0; i<r; i++) {
			if (i&1) {
				for (int j=0; j<c; j++) {
					B[i][j] = idx;
					if (A[i][j] == 1) ct --;
					if (ct == 0) {
						if (idx + 1 < k) idx ++;
						ct = each;
						if (more > 0) {
							ct ++;
							more --;
						}
					}
				}
			} else {
				for (int j=c-1; j>=0; j--) {
					B[i][j] = idx;
					if (A[i][j] == 1) ct --;
					if (ct == 0) {
						if (idx + 1 < k) idx ++;
						ct = each;
						if (more > 0) {
							ct ++;
							more --;
						}
					}
				}
			}
		}
		for (int i=0; i<r; i++) {
			for (int j=0; j<c; j++) {
				char ch;
				int idx = B[i][j];
				if (idx < 10) ch = B[i][j] + '0';
				else if (idx < 36) ch = B[i][j] - 10 + 'a';
				else if (idx < 62) ch = B[i][j] - 36 + 'A';
				printf("%c", ch);
			}
			puts("");
		}
	}

	return 0;
}
