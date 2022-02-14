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
	int N, prev;
	int ct=0;
	cin >> N;
	cin >> prev;

	for (int i=1; i<N; i++) {
		int t;
		cin >> t;
		ct += t != prev;
		prev = t;
	}

	cout << ct + 1;

	return 0;
}
