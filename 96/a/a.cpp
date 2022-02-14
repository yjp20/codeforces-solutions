// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	char s[200];
	cin >> s;
	int len = strlen(s);
	int ct1 = 0;
	int ct2 = 0;
	for (int i=0; i<len; i++) {
		if (s[i] == '1') {
			ct1 ++;
			ct2 = 0;
		}
		else {
			ct1 = 0;
			ct2 ++;
		}

		if (ct1 == 7 || ct2 == 7) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;
}
