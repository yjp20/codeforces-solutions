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
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
		char s[105];
		cin >> s;
		if (strlen(s) > 10) {
			printf("%c%d%c\n", s[0], strlen(s)-2, s[strlen(s)-1]);
		}
		else {
			printf("%s\n", s);
		}
	}
	return 0;
}
