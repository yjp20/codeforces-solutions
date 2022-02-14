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
	int n, t;
	cin >> n >> t;
	if (t == 10 && n == 1) {
		puts("-1");
		return 0;
	}
	if (t == 10) t = 1;
	printf("%d", t);
	for (int i=1; i<n; i++) printf("0");
	return 0;
}
