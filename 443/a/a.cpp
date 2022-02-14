// youngjinp20
// 2020 04

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
using namespace std;

typedef long long ll;

int main() {
	char s[1005];
	fgets(s, 1005, stdin);
	int len = strlen(s);
	set<char> S;

	for (int i=0; i<len; i++) {
		if ('a' <= s[i] && s[i] <= 'z') S.insert(s[i]);
	}

	cout << S.size();

	return 0;
}
