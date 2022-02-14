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

const int MAX = 24 * 60;
int ct[MAX];

int main() {
	int N;
	int best = 0;
	cin >> N;

	for (int i=0; i<N; i++) {
		int H, M;
		cin >> H >> M;
		best = max(best, ++ct[H*60+M]);
	}

	cout << best;

	return 0;
}
