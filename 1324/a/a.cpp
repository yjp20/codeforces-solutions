// youngjinp20
// 2020 06

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int main() {
	int T;
	cin >> T;

	while (T--) {
		int N;
		int parity;
		bool flag = true;
		cin >> N;

		cin >> parity;
		parity = (parity&1);
		N--;

		while (N--) {
			int t;
			cin >> t;
			if (parity != (t&1)) {
				flag = false;
			}
		}

		cout << ( flag ? "YES" : "NO" ) << endl;
	}

	return 0;
}
