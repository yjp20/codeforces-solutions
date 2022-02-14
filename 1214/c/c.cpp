// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int n;

int main() {
	scanf("%d\n", &n);
	int m = 0;
	int ct = 0;
	for (int i=0; i<n; i++) {
		char c;
		scanf("%c", &c);
		if (c == '(') ct ++;
		else ct --;
		m = min(ct,m);
	}
	printf("%s\n", ct == 0 && m >= -1 ? "Yes" : "No");
	return 0;
}
