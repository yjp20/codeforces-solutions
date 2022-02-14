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
		int N;
		int ct[26] = {0};
		cin >> N;
		for (int i=0; i<N; i++) {
			char s[1005];
			cin >> s;
			int len = strlen(s);

			for (int j=0; j<len; j++) {
				ct[s[j]-'a']++;
			}
		}

		bool flag = true;
		for (int i=0; i<26; i++) {
			if (ct[i] % N) {
				flag = false;
			}
		}

		cout << (flag ? "YES" : "NO") << endl;
	}

	return 0;
}
