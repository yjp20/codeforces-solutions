// youngjinp20
// 2020 06

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

char c[1005];
int ct[26];

int main() {
	cin >> c;

	int len = strlen(c);

	for (int i=0; i<len; i++) {
		ct[c[i]-'a']++;
	}

	int n=0;

	for (int i=0; i<26; i++) {
		n += ct[i]&1;
	}

	cout << (n&1 || n == 0 ? "First" : "Second");

	return 0;
}
