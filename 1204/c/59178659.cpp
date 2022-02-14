#include <bits/stdc++.h>
#define MAX 100

using namespace std;

int n, m;
int J[1000000];
int A[MAX+1][MAX+1][MAX+1];
vector<int> G[MAX+1];

void input() {
	scanf("%d", &n);
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			int t; scanf("%1d", &t);
			if (t) G[i].push_back(j);
		}
	}
	scanf("%d", &m);
	for (int i=0; i<m; i++) scanf("%d", &J[i]);
}

int main() {
	input();

	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			int arr[MAX+1][MAX+1] = {0};
			int gen[MAX+1] = {0};
			int vt[MAX+1] = {0};

			queue<int> Q;
			gen[i] = 1;
			Q.push(i);
			while (!Q.empty()) {
				int f = Q.front(); Q.pop();
				if (f == j) break;
				for (auto x : G[f]) {
					if (!gen[x]) {
						gen[x] = gen[f]+1;
						Q.push(x);
					}
				}
			}

			for (int k=1; k<=n; k++) {
				arr[k][k] = 1;
			}

			queue<int> P;
			P.push(i);
			while (!P.empty()) {
				int f = P.front(); P.pop();
				if (f == j) break;
				for (auto x : G[f]) {
					if (gen[x] > gen[f]) {
						for (int k=1; k<=n; k++) {
							arr[x][k] |= arr[f][k];
						}
					}
					if (!vt[x]) {
						vt[x] = true;
						P.push(x);
					}
				}
			}
			memcpy(A[i][j], arr[j], sizeof(int)*(n+1));
		}
	}

	vector<int> ANS;
	ANS.push_back(J[0]);
	for (int l=0,r=0; r<m; r++) {
		for (int i=l+1; i<r; i++) {
			if (!A[J[l]][J[r]][J[i]]) {
				l = r-1;
				ANS.push_back(J[l]);
			}
		}
	}
	ANS.push_back(J[m-1]);

	printf("%d\n", ANS.size());
	for (auto x : ANS) printf("%d ", x);
}
