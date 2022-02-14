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
	for (int j=0; j<t; j++) {
		int n;
		int a, b, c;
		int r=0, p=0, s=0;
		int arr[105];
		char str[105];
		cin >> n;
		cin >> a >> b >> c;
		cin >> str;
		for (int i=0; i<n; i++) {
			if (str[i] == 'R') { r ++; arr[i] = 0; };
			if (str[i] == 'P') { p ++; arr[i] = 1; };
			if (str[i] == 'S') { s ++; arr[i] = 2; };
		}

		int rr = min(a, s);
		int pp = min(b, r);
		int ss = min(c, p);

		a -= rr;
		s -= rr;
		b -= pp;
		r -= pp;
		c -= ss;
		p -= ss;

		int wins = rr + pp + ss;
		int other = a + b + c;

		if (wins >= (n+1)/2) {
			puts("YES");
			for (int i=0; i<n; i++) {
				if (arr[i] == 2) {
					if (rr) {
						printf("R");
						rr --;
					} else {
						if (b) { printf("P"); b--; }
						else if (c) { printf("S"); c--; }
					}
				}
				if (arr[i] == 0) {
					if (pp) {
						printf("P");
						pp --;
					} else {
						if (a) { printf("R"); a--; }
						else if (c) { printf("S"); c--; }
					}
				}
				if (arr[i] == 1) {
					if (ss) {
						printf("S");
						ss --;
					} else {
						if (a) { printf("R"); a--; }
						else if (b) { printf("P"); b--; }
					}
				}
			}
			puts("");
		}
		else {
			puts("NO");
		}
	}

	return 0;
}
