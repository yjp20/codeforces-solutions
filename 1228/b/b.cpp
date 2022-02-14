// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int h, w;
	int u[1001][1001];
	cin >> h >> w;
	for (int i=0; i<h; i++) {
		int r;
		cin >> r;
		for (int j=0; j<r; j++) {
			if (u[i][j] == -1) {
				puts("0");
				return 0;
			}
			else u[i][j] = 1;
		}

		if (u[i][r] == 1) {
			puts("0");
			return 0;
		}
		else u[i][r] = -1;
	}
	for (int i=0; i<w; i++) {
		int c;
		cin >> c;
		for (int j=0; j<c; j++) {
			if (u[j][i] == -1) {
				puts("0");
				return 0;
			}
			else u[j][i] = 1;
		}

		if (u[c][i] == 1) {
			puts("0");
			return 0;
		}
		else u[c][i] = -1;
	}

	int ct = 1;
	for (int i=0; i<h; i++) {
		for (int j=0; j<w; j++) {
			if (!u[i][j]) ct <<= 1;
			ct %= 1000000007;
		}
	}
	cout << ct;

	return 0;
}
