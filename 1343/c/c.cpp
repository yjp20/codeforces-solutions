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
	for (int t=1; t<=T; t++) {
		int N;
		cin >> N;

		int prev = 0;
		ll sum = 0;

		cin >> prev;
		for (int i=1; i<N; i++) {
			int tmp;
			cin >> tmp;

			if (prev < 0 != tmp < 0) {
				sum += prev;
				prev = tmp;
			}
			else {
				prev = max(prev, tmp);
			}
		}
		sum += prev;
		cout << sum << endl;
	}

	return 0;
}
