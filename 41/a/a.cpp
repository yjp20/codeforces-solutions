// youngjinp20
// 2020 06

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int main() {
	char a[1000];
	char b[1000];
	cin >> a;
	cin >> b;
	int len1 = strlen(a);
	int len2 = strlen(b);

	if (len1 != len2) {
		cout << "NO";
		return 0;
	}

	for (int i=0; i<len1; i++) {
		if (a[i] != b[len1-i-1]) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";

	return 0;
}
