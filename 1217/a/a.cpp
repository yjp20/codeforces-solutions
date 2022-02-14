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
	int T; cin >> T;
	for (int i=0; i<T; i++) {
		ll st,in,e;
		scanf("%lld %lld %lld", &st, &in, &e);
		st = st - in;
		ll v = st+e - max((st+e)/2+1,st) + 1;
		printf("%lld\n", v > 0 ? v : 0);
	}
	return 0;
}
