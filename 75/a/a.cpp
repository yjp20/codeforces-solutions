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

int prune(int x) {
	int t=0;
	int i=1;
	while (x) {
		if (x%10) {
			t += i * (x%10);
			i *= 10;
		}
		x /= 10;
	}
	return t;
}

int main() {
	int A, B;
	cin >> A >> B;

	int C1 = prune(A) + prune(B);
	int C2 = prune(A+B);

	cout << (C1 == C2 ? "YES" : "NO");

	return 0;
}
