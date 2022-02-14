// youngjinp20
// 2019 11

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int k;
	cin >> k;
	for (int t=0; t<k; t++) {
		int n;
		char s[1005];
		char j[1005];
		int ct1[26] = {0};
		int ct2[26] = {0};
		bool possible = true;
		cin >> n >> s >> j;
		for (int i=0; i<n; i++) {
			if (s[i] != j[i]) {
				ct1[ s[i]-'a' ] ++;
				ct2[ j[i]-'a' ] ++;
			}
		}
		for (int i=0; i<26; i++) {
			if ((ct1[i] + ct2[i]) & 1) {
				possible = false;
			}
		}
	}
	return 0;
}
