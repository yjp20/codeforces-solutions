// youngjinp20
// 2020 08

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int main() {
	int T;
	cin >> T;
	while (T--) {
		char s[100005];
		bool dp[100005] = {0};
		int x;
		cin >> s;
		cin >> x;

		int len = strlen(s);

		for (int i=0; i<len; i++)
			dp[i] = 1;

		for (int i=0; i<len; i++) {
			if (s[i] == '0') {
				if (i+x < len) dp[i+x] = 0;
				if (i-x >= 0) dp[i-x] = 0;
			}
		}

		bool flag = true;
		for (int i=0; i<len; i++) {
			bool val = false;
			if (i+x < len) val = val || dp[i+x];
			if (i-x >= 0) val = val || dp[i-x];
			if (val != s[i]-'0') {
				flag = false;
				break;
			}
		}

		if (flag) {
			for (int i=0; i<len; i++)
				cout << dp[i];
			cout << endl;
		}
		else {
			cout << -1 << endl;
		}
	}

	return 0;
}
