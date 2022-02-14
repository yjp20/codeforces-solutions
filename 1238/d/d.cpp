// youngjinp20
// 2019 10

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int n, ct=0;
	char s[300005];
	cin >> n;
	cin >> s;
	int a=n, b=n;

	for (int i=1; i<n; i++) {
		if (s[i] != s[i-1]) ct ++;
	}
	for (int i=0; i<n-1; i++) {
		if (s[i] != s[i+1]) {
			a = i+1;
			break;
		}
	}
	for (int i=n-1; i>0; i--) {
		if (s[i] != s[i-1]) {
			b = n-i;
			break;
		}
	}

	long long ans = (long long) (n-1)*n/2-2*n+a+b+ct;
	printf("%lld\n", ans);
	return 0;
}
