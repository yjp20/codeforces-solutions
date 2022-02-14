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
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	int a = x1-x2;
	int b = y1-y2;


	if ((!a && !b) || (a && b && abs(a) != abs(b))) {
		cout << -1;
		return 0;
	}

	if (a && b) {
		printf("%d %d %d %d", x1, y2, x2, y1);
		return 0;
	}

	if (a) {
		printf("%d %d %d %d", x1, y1+a, x2, y1+a);
		return 0;
	}

	if (b) {
		printf("%d %d %d %d", x1+b, y1, x1+b, y2);
		return 0;
	}

	return 0;
}
