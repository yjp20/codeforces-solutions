// youngjinp20
// 2020 04

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
using namespace std;

typedef long long ll;

int k;
int ct[26];
char s[1005];

int main() {
	cin >> k;
	cin >> s;

	int len = strlen(s);

	for (int i=0; i<len; i++) {
		ct[s[i] - 'a'] ++;
	}

	for (int i=0; i<26; i++) {
		if (ct[i]%k) {
			cout << -1;
			return 0;
		}
	}

	for (int f=0; f<k; f++) {
		for (int i=0; i<26; i++) {
			for (int j=0; j<ct[i]/k; j++) {
				cout << (char) (i + 'a');
			}
		}
	}

	return 0;
}
