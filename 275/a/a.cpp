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
	bool res[3][3] = {0};
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			int t;
			cin >> t;
			if (t&1) {
				if (i>0) res[i-1][j] ^= 1;
				if (i<2) res[i+1][j] ^= 1;
				if (j>0) res[i][j-1] ^= 1;
				if (j<2) res[i][j+1] ^= 1;
				res[i][j] ^= 1;
			}
		}
	}
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			printf("%d", res[i][j] ^ 1);
		}
		puts("");
	}

	return 0;
}
