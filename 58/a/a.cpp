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
	char s[1000];
	char t[10] = "hello";
	cin >> s;

	int len = strlen(s);
	int it=0;

	for (int i=0; i<len; i++) {
		if (s[i] == t[it]) it ++;
	}

	if (it == 5) cout << "YES";
	else cout << "NO";

	return 0;
}
