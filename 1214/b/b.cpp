// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int b,g,n;

int main() {
	cin >> b >> g >> n;
	int ct = 0;
	for (int i=0; i<=n; i++) {
		if (i<=b && n-i<=g) ct ++;
	}
	printf("%d\n", max(ct, 1));
	return 0;
}
