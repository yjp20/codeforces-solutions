// youngjinp20
// 2020 07

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const int MAX = 1e5;
char s[MAX+1];

int main() {
	cin >> s;
	int len = strlen(s);
	if (len == 1) {
		cout << 0;
		return 0;
	}

	int ct = 0;
	int n = 1;
	for (int i=0; i<len; i++) {
		ct += s[i] - '0';
	}

	while (ct >= 10) {
		int t = 0;
		while (ct) {
			t += ct%10;
			ct /= 10;
		}
		ct = t;
		n ++;
	}

	cout << n;

	return 0;
}
