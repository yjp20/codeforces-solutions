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

int N, ct;

int main() {
	cin >> N;

	N -= 10;

	for (int i=2; i<=10; i++) {
		if (i == N) ct += 4;
	}

	if (1 == N) ct += 4;
	if (10 == N) ct += 3*4-1;
	if (11 == N) ct += 4;

	cout << ct;

	return 0;
}
