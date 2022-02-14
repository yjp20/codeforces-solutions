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
	int ct0=0;
	int ct5=0;

	for (int i=0; i<N; i++) {
		int t;
		cin >> t;
		(t ? ct5 : ct0) ++;
	}

	if (!ct0) {
		cout << -1;
		return 0;
	}

	if (!(ct5/9)) {
		cout << 0;
		return 0;
	}

	for (int i=0; i<ct5/9; i++) {
		cout << "555555555";
	}

	for (int i=0; i<ct0; i++) {
		cout << "0";
	}

	return 0;
}
