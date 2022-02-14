// youngjinp20
// 2020 07

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int main() {
	int A, B, C;
	cin >> A >> B >> C;

	int s = A+B+C;
	int m = max({A, B, C});

	if ((s&1) || m > s/2) {
		cout << "Impossible";
		return 0;
	}

	if (A == m) {
		int c = (B+C-A) / 2;
		printf("%d %d %d", B-c, c, C-c);
	}
	else if (B == m) {
		int c = (A+C-B) / 2;
		printf("%d %d %d", A-c, C-c, c);
	}
	else if (C == m) {
		int c = (A+B-C) / 2;
		printf("%d %d %d", c, B-c, A-c);
	}

	return 0;
}
