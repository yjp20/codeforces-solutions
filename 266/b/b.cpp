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
	int n, t;
	char s[100];
	cin >> n >> t;
	cin >> s;
	for (int i=0; i<t; i++) {
		for (int j=0; j<n-1; j++) {
			if (s[j] == 'B' && s[j+1] == 'G') {
				swap(s[j], s[j+1]);
				j++;
			}
		}
	}
	cout << s << "\n";

	return 0;
}
