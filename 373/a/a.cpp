// youngjinp20
// 2020 05

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
using namespace std;

typedef long long ll;

int main() {
	int k;
	int ct[10] = {0};
	cin >> k;

	for (int i=0; i<16; i++) {
		char c;
		do {
			cin >> c;
		} while (c == '\n');

		if ('0' <= c && c <= '9') {
			if (++ct[c - '0'] > 2*k) {
				cout << "NO";
				return 0;
			}
		}
	}

	cout << "YES";

	return 0;
}
