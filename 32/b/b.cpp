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
	char s[205];
	char out[205] = {0};
	int idx=0;
	cin >> s;
	for (int i=0; i<strlen(s); i++) {
		if (s[i] == '.') {
			out[idx++] = '0';
		}
		else {
			if (s[++i] == '.') {
				out[idx++] = '1';
			}
			else {
				out[idx++] = '2';
			}
		}
	}
	cout << out;

	return 0;
}
