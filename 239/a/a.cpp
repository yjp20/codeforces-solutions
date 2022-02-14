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
	int Y, K, N;
	cin >> Y >> K >> N;

	int m = Y/K;
	N -= Y;
	Y -= K*m;

	bool flag =false;

	for (int i=-Y; i<=N; i+=K) {
		if (i>0) {
			flag = true;
			cout << i << " ";
		}
	}

	if (!flag) cout << -1;

	return 0;
}
