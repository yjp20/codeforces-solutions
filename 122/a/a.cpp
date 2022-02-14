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

int N;

bool perm(int depth, int p) {
	if (depth == 4) return false;
	bool t = false;
	t = t || (p && N%p == 0);
	t = t || perm(depth+1, p*10+4);
	t = t || perm(depth+1, p*10+7);
	return t;
}

int main() {
	cin >> N;
	cout << (perm(0,0) ? "YES" : "NO");

	return 0;
}
