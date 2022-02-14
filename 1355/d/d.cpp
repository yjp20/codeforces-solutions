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
	int N, S;
	cin >> N >> S;

	if (N <= S/2) {
		cout << "YES" << endl;

		cout << S - (2 * N) + 2;
		for (int i=1; i<N; i++) cout << " " << 2;

		cout << endl << S-1 << endl;
	}
	else cout << "NO" << endl;

	return 0;
}
