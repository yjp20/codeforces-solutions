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
	int N,t,ct=0;
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> t;
		ct += t&1;
	}
	printf("%d\n", min(N-ct, ct));
	return 0;
}
