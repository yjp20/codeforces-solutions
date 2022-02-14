// youngjinp20
// 2019 11

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int n, m;
	cin >> n >> m;

	for (int i=n+1;1;i++) {
		bool prime = true;
		for (int j=2; j < i; j++) {
			if (i%j == 0) {
				prime = false;
				continue;
			}
		}
		if (prime) {
			if (m == i) puts("YES");
			else        puts("NO");
			return 0;
		}
	}


	return 0;
}
