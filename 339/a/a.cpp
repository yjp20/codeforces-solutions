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
	char out[105];
	int idx[10] = {0};
	cin >> s;
	int len = strlen(s);
	int l=0;

	for (int i=0; i<len; i+=2) {
		idx[s[i] - '0'] ++;
	}

	for (int i=0; i<10; i++) {
		for (int j=0; j<idx[i]; j++) {
			out[l++] = i+'0';
			out[l++] = '+';
		}
	}

	out[l-1] = 0;
	cout << out;

	return 0;
}
