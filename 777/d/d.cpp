// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int n;
string s[500000];

int main() {
	ios::sync_with_stdio(false);

	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> s[i];
	}

	for (int i=n-1; i>0; i--) {
		int cur=-1;
		bool flag = true;
		for (int j=0; j<s[i].size() && j<s[i-1].size(); j++) {
			char a = s[i-1].at(j);
			char b = s[i].at(j);

			if (a < b) {
				flag = false;
				break;
			}
			if (b < a) {
				flag = false;
				s[i-1].resize(j);
				break;
			}
		}
		if (flag && s[i-1].size() > s[i].size()) {
			s[i-1].resize(s[i].size());
		}
	}
	for (int i=0; i<n; i++) {
		cout << s[i] << "\n";
	}

	return 0;
}
