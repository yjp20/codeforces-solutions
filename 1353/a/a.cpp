// youngjinp20
// 2020 05

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

	for (int t=1; t<=T; t++) {
		int N, M, out;
		cin >> N >> M;

		switch (N) {
			case 1:
				out = 0;
				break;
			case 2:
				out = M;
				break;
			default:
				out = M*2;
		}

		cout << out << endl;
	}

	return 0;
}
