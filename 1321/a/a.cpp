// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define pb push_back

typedef long long ll;

const int MAX = 100;
int N;
int r[MAX];
int b[MAX];

int main() {
	cin >> N;

	for (int i=0; i<N; i++) {
		cin >> r[i];
	}
	for (int i=0; i<N; i++) {
		cin >> b[i];
	}

	int ct1=0, ct2=0;
	for (int i=0; i<N; i++) {
		if (r[i] ^ b[i]) {
			ct1 += r[i];
			ct2 += b[i];
		}
	}

	if (!ct1) puts("-1");
	else printf("%d", ct2 / ct1 + 1);

	return 0;
}
