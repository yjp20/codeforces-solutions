// youngjinp20
// 2020 05

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int main() {
	char s[1000];
	cin >> s;
	int len = strlen(s);

	for (int i=0; i <len; i++) {
		switch (s[i]) {
			case 'H':
			case 'Q':
			case '9':
				cout << "YES";
				return 0;
		}
	}

	cout << "NO";
	return 0;
}
