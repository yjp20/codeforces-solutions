// youngjinp20
// 2020 05

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int N;
int G[26][26];
char s[100][105];

void gen(int l, int r, int d) {
	if (l == r) return;

	int c = s[l][d] == 0 ? l+1 : l;

	for (int i=l+1; i<r; i++) {
		if (s[i][d] != s[i-1][d]) {
			gen(c, i, d+1);
			c = i;
		}
		else {
			G[ s[i-1][d]-'a' ][ s[i][d]-'a' ] = 1;
		}
	}

	gen(c, r, d+1);
}

int main() {
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> s[i];
	}

	gen(0, N, 0);

	return 0;
}
