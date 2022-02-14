// youngjinp20
// 2019 08

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
		int a, b, n;
		int res = 0;
		cin >> a >> b >> n;
		for (int j=0; j<32; j++) {
			bool t;
			int aa = a&1;
			int bb = b&1;
			a >>= 1;
			b >>= 1;
			if (aa == 0 && bb == 0) t = 0;
			if (aa == 0 && bb == 1) t = (n)%3;
			if (aa == 1 && bb == 0) t = (n+2)%3;
			if (aa == 1 && bb == 1) t = (n+1)%3;
			res += (t > 0) << j;
		}
		printf("%d\n", res);
	}
	return 0;
}
