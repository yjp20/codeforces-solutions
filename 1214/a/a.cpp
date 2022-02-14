// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int N, D, E;
int m = 1e9;

int main() {
	scanf("%d %d %d", &N, &D, &E);

	for (int d=N/D, e=0; d >= 0; d --) {
		for (; d*D+(e+1)*E*5 <= N; e++);
		m = min(N-d*D-e*E*5, m);
	}

	cout << m;
	return 0;
}
