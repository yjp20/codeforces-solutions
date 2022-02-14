// youngjinp20
// 2020 08

#include <bits/stdc++.h>
#define M 101
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;
int t, n;
char s[105];

int main() {
	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> n;
		cin >> s;
		for (int test=0; test<51; test+=1) {
			bool good = false;

			for (int j=0; j<=n; j++) {
				if (j==n) {
					good = true;
					break;
				}
				bool flag = true;

				for (int k=0; k<min(n,8); k++) {
					if (s[j+k] == ((test&(1<<k)) ? '1':'0')) {
						flag = false;
						break;
					}
				}

				if (flag) {
					break;
				}
			}

			if (good) {
				for (int k=0; k<min(n,8); k++) {
					char x = '0' + ((test&(1<<k)) ? 1 : 0);
					cout << x;
				}
				for (int k=0; k<max(n-8,0); k++) {
					cout << '0';
				}
				cout << endl;
				break;
			}
		}
	}

	return 0;
}
