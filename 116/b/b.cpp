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
	int N, M, ct=0;
	char s[20][20];
	cin >> N >> M;

	for (int i=0; i<N; i++) {
		cin >> s[i];
	}

	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			bool flag = false;
			if (s[i][j] == 'W') {
				if (i) flag = flag || s[i-1][j] == 'P';
				if (j) flag = flag || s[i][j-1] == 'P';
				if (i<N) flag = flag || s[i+1][j] == 'P';
				if (j<M) flag = flag || s[i][j+1] == 'P';
				ct += flag;
			}
		}
	}

	cout << ct;

	return 0;
}
