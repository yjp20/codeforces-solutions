// youngjinp20
// 2019 10

#include <bits/stdc++.h>
using namespace std;

int n, k;
int A[1000000+1];

int main() {
	cin >> n >> k;
	for (int i=1; i<=1000000; i++) {
		int t = i;
		int sig = 0;
		while (t) {
			sig = max(sig, t%10);
			t /= 10;
		}
		if ( i >= k ) sig = max(sig, k);
		A[i] = A[i-sig]+1;
	}
	printf("%d\n", A[n]);
	return 0;
}
