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
	char s[105];
	cin >> s;
	int len = strlen(s);
	int best = 0;
	int ct = 0;
	for (int j=0; j<len; j++) {
		ct += s[j-1] == 'V' && s[j] == 'K';
	}
	best = ct;
	for (int i=0; i<len; i++) {
		int og = s[i];
		ct = 0;
		s[i] = og == 'V' ? 'K' : 'V';
		for (int j=0; j<len; j++) {
			ct += s[j-1] == 'V' && s[j] == 'K';
		}
		s[i] = og;
		best = max(ct, best);
	}
	cout << best;
	return 0;
}
