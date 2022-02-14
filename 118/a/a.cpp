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

int m[200];

int main() {
	char c[1000];
	cin >> c;

	m['a'] = 1;
	m['o'] = 1;
	m['y'] = 1;
	m['e'] = 1;
	m['u'] = 1;
	m['i'] = 1;

	for (int i=0; c[i]; i++) {
		if (c[i] < 'a') c[i] += 'a' - 'A';
		if (m[c[i]]) continue;
		cout << "." << c[i];
	}

	return 0;
}
