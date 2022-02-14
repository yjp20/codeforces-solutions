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

int N;

int main() {
	cin >> N;
	for (int i=0; i<=2*N; i++) {
		int it = min(i, 2*N-i);

		for (int j=0; j<N-it; j++) {
			cout << "  ";
		}

		int t = 0;

		while (t < it) {
			cout << t << " ";
			t ++;
		}

		while (t >= 0) {
			cout << t;
			if (t != 0) cout << " ";
			t --;
		}
		cout << endl;
	}

	return 0;
}
