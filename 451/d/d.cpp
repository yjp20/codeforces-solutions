// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAX = 1e5+1;
char s[MAX];
ll a[2][2];

int main() {
	cin >> s;

	int len = strlen(s);
	for (int i=0; i<len; i++) a[s[i]-'a'][i&1] ++;

	ll odd = 0;
	ll even = 0;
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			odd += a[i][j] * a[i][j] + a[i][j];
			even += a[i][!j] * a[i][j];
		}
	}

	cout << even/2 << " " << odd/2;

	return 0;
}
