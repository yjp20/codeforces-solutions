// youngjinp20
// 2020 04

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
using namespace std;

typedef long long ll;

int N;
char s[105];
bool used[26];

int main() {
	cin >> N;
	cin >> s;

	for (int i=0; i<N; i++) {
		if (s[i] >= 'a') {
			used[s[i]-'a'] = true;
		}
		else {
			used[s[i]-'A'] = true;
		}
	}

	bool flag = 1;
	for (int i=0; i<26; i++) {
		flag &= used[i];
	}

	printf(flag ? "YES" : "NO");

	return 0;
}
