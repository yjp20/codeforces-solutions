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
	int l, r;
	cin >> l >> r;
	for (int i=l; i<=r; i++) {
		bool flag = false;
		int used[10] = {0};
		int t = i;

		while (t) {
			if (++used[t%10] >= 2) {
				flag = true;
				break;
			}
			t /= 10;
		}

		if (!flag) {
			printf("%d\n", i);
			return 0;
		}
	}
	puts("-1");

	return 0;
}
