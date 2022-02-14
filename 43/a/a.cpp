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
map<string, int> M;

int main() {
	cin >> N;

	for (int i=0; i<N; i++) {
		string s;
		cin >> s;
		M[s] ++;
	}

	int best = 0;
	for (auto &e : M) {
		best = max(best, e.second);
	}

	for (auto &e : M) {
		if (e.second == best) cout << e.first;
	}

	return 0;
}
