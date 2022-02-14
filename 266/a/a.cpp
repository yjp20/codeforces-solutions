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
	int n, ct=0;
	char s[100];
	cin >> n >> s;
	for (int i=0; i<n-1; i++) {
		if (s[i] == s[i+1]) {
			ct ++;
		}
	}
	cout << ct;

	return 0;
}
