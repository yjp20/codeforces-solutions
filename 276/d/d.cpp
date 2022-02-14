// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

ll l, r, ans;

int main() {
	cin >> l >> r;
	for (int i=63; i>=0; i--) if (l>>i != r>>i) ans += 1LL << i;
	cout << ans;
	return 0;
}
