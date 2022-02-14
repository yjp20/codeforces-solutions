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

int N;
int ct[8];

int main() {
	cin >> N;

	for (int i=0; i<N; i++) {
		int t;
		cin >> t;
		ct[t] ++;
	}

	if (ct[7] || ct[5] || ct[1] != N/3 || ct[3] > ct[6] || ct[2] + ct[3] != ct[4] + ct[6]) {
		cout << -1;
		return 0;
	}

	for (int i=0; i<ct[4]; i++) {
		cout << "1 2 4\n";
	}

	for (int i=0; i<ct[6]-ct[3]; i++) {
		cout << "1 2 6\n";
	}

	for (int i=0; i<ct[3]; i++) {
		cout << "1 3 6\n";
	}

	return 0;
}
