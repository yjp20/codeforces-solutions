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
	int cap = 0;

	for (int i=0; i<len; i++) {
		if (s[i] < 'a') cap ++;
	}

	for (int i=0; i<len; i++) {
		if (cap > len/2 && s[i] >= 'a') {
			s[i] += - 'a' + 'A';
		}
		if (cap <= len/2 && s[i] < 'a') {
			s[i] += - 'A' + 'a';
		}
	}

	cout << s;

	return 0;
}
