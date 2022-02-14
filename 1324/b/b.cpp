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
	int T;
	cin >> T;

	while (T--) {
		int first[5001] = {0};
		int last[5001] = {0};
		int N;
		bool flag = false;
		cin >> N;

		for (int i=1; i<=N; i++) {
			int tmp;
			cin >> tmp;
			if (!first[tmp]) first[tmp] = i;
			last[tmp] = i;
		}

		for (int i=1; i<=N; i++) {
			if (last[i] - first[i] >= 2) {
				flag = true;
				break;
			}
		}

		cout << ( flag ? "YES" : "NO" ) << endl;
	}

	return 0;
}
