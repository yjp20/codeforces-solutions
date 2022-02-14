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
	int N;
	cin >> N;

	int ct1=0;
	int ct2=0;

	for (int i=0; i<N; i++) {
		int t;
		cin >> t;
		(t == 100 ? ct1 : ct2) ++;
	}

	if (ct1&1) {
		cout << "NO";
		return 0;
	}

	if (ct1 == 0 && (ct2&1)) {
		cout << "NO";
		return 0;
	}

	cout << "YES";
	return 0;
}
