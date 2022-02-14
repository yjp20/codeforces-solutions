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
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	int num, den;

	// capped by width
	if ((double) C/A > (double) D/B) {
		num = B*C-A*D;
		den = B*C;
	}

	//capped by height
	if ((double) C/A <= (double) D/B) {
		num = A*D-B*C;
		den = A*D;
	}

	int g = gcd(num,den);
	printf("%d/%d\n", num/g, den/g);

	return 0;
}
