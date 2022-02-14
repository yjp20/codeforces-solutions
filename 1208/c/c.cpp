// only works for n = power of 2
#include <bits/stdc++.h>
using namespace std;

int n;
int g[1005][1005];

int main() {
	cin >> n;
	for (int k=0; k<=20; k++) {
		int dist = 1 << (k/2);
		int p = k&1;
		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				int vert = p && (i/dist)&1;
				int hori = !p && (j/dist)&1;
				if (hori || vert) {
					g[i][j] += 1 << k;
				}
			}
		}
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf("%2d ", g[i][j]);
		}
		puts("");
	}

	return 0;
}
