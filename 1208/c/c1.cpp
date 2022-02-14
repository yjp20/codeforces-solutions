// youngjinp20
// 2019 10

#include <bits/stdc++.h>
using namespace std;

int n, h, g[1000][1000];

int main() {
	cin >> n;
	h = n/2;

	for (int i=0; i<h; i++) {
		for (int j=0; j<h; j++) {
			int f = i*h+j;
			g[i  ][j  ] = 4*f;
			g[i+h][j  ] = 4*f+1;
			g[i  ][j+h] = 4*f+2;
			g[i+h][j+h] = 4*f+3;
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
