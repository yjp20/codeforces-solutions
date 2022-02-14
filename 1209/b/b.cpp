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
	int n, m=0;
	int state[100+1];
	int a[100+1], b[100+1];
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		char c;
		scanf("\n%c", &c);
		state[i] = c - '0';
	}
	for (int i=0; i<n; i++) {
		scanf("%d %d", &a[i], &b[i]);
	}

	// initial condition
	for (int i=1; i<=125; i++) {
		int ct = 0;
		for (int j=0; j<n; j++) {
			int aa = a[j];
			int bb = b[j];
			ct += state[j];
			if (bb<=i && i%aa == bb%aa) state[j] = !state[j];
		}
		m = max(m, ct);
	}
	cout << m;
	return 0;
}
