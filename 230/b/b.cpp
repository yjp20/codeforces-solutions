// youngjinp20
// 2020 04

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
using namespace std;

typedef long long ll;

int N;

int main() {
	cin >> N;

	for (int i=0; i<N; i++) {
		ll t, v;
		bool flag = true;
		cin >> t;
		v = sqrt(t);

		if (t==1) flag = false;
		if (v * v != t) flag = false;
		if (v % 2 == 0 && v != 2) flag = false;
		for (int j=3; j*j <= v && flag; j+=2) {
			if (v % j == 0) {
				flag = false;
			}
		}

		cout << (flag ? "YES" : "NO") << endl;
	}

	return 0;
}
