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

char c[1000];

int main() {
	cin >> c;

	int first = 0;
	for (int i=0; c[i]; i++) {
		bool flag = false;
		while (c[i] == 'W' && c[i+1] == 'U' && c[i+2] == 'B') {
			flag = true;
			i += 3;
		}
		if (!c[i]) break;
		if (flag && first) cout << " ";
		first = 1;
		cout << c[i];
	}

	return 0;
}
