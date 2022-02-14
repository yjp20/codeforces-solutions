// youngjinp20
// 2019 11

#include <bits/stdc++.h>
using namespace std;

int main() {
	int k,l,m,n,d;
	int ct=0;
	cin >> k >> l >> m >> n >> d;

	for (int i=1; i<=d; i++) {
		bool a = i%k == 0;
		bool b = i%l == 0;
		bool c = i%m == 0;
		bool d = i%n == 0;

		if (a || b || c || d) {
			ct ++;
		}
	}

	cout << ct;


	return 0;
}
