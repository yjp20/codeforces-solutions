// youngjinp20
// 2020 04

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
using namespace std;

typedef long long ll;

const int MAX = 5e5+1;
int N, K;
char s[MAX];

int main() {
	cin >> N >> K;
	cin >> s;

	if (K==2) {
		int ct = 0;
		for (int i=0; i<N; i++) {
			ct += s[i] == (i&1 ? 'A' : 'B');
		}
		if (ct < N-ct) {
			cout << ct << endl;
			for (int i=0; i<N; i++)
				cout << (i&1 ? 'B' : 'A');
		}
		else {
			cout << N-ct << endl;
			for (int i=0; i<N; i++)
				cout << (i&1 ? 'A' : 'B');
		}
		cout << endl;
	}
	else {
		int ct = 0;
		for (int i=1; i<N; i++) {
			if (s[i-1] == s[i]) {
				ct ++;
				for (int j=0; j<N; j++) {
					if (j+'A' != s[i-1] && j+'A' != s[i+1]) {
						s[i] = j+'A';
						break;
					}
				}
			}
		}
		cout << ct << endl;
		cout << s << endl;
	}

	return 0;
}
