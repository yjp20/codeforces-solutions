// youngjinp20
// 2020 04

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
using namespace std;

typedef long long ll;

int N, M, K;
char s[501][501];
bool vt[501][501];

void search(int x, int y) {
	if (x < 0 || N <= x) return;
	if (y < 0 || M <= y) return;
	if (vt[x][y]) return;
	if (s[x][y] == '#') return;
	vt[x][y] = true;

	search(x+1, y);
	search(x-1, y);
	search(x, y+1);
	search(x, y-1);

	if (K) s[x][y] = 'X', K--;
}

int main() {
	cin >> N >> M >> K;

	for (int i=0; i<N; i++) {
		cin >> s[i];
	}

	int x, y;
	for (int i=0; i<N*M; i++) {
		if (s[i/M][i%M] == '.') {
			x = i/M;
			y = i%M;
			break;
		}
	}

	search(x, y);

	for (int i=0; i<N; i++) {
		cout << s[i] << endl;
	}

	return 0;
}
