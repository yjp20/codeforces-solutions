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
	int a1, a2, k1, k2, n;
	cin >> a1 >> a2 >> k1 >> k2 >> n;
	if (k1 > k2) {
		swap(a1, a2);
		swap(k1, k2);
	}
	int threshold = a1 * (k1-1) + a2 * (k2-1);
	int mi = max(0, n-threshold);
	int ma = 0;
	int b1 = min(a1, n/k1);
	ma += b1;
	n -= b1 * k1;
	int b2 = n/k2;
	ma += b2;
	n -= b2 * k2;
	printf("%d %d\n", mi, ma);
	return 0;
}
