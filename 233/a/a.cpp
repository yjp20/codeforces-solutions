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
	int n;
	cin >> n;

	if (n&1) {
		cout << -1;
		return 0;
	}

	for (int i=1; i<=n; i++) {
		cout << i + 2*(i&1) - 1 << " ";

	}

	return 0;
}
