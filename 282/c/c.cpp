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

const int MAX = 1e6+5;

int main() {
	char a[MAX];
	char b[MAX];

	cin >> a >> b;

	int l = strlen(a);
	bool empty = true;

	if (l != strlen(b)) {
		cout << "NO";
		return 0;
	}

	for (int i=0; i<l; i++) {
		if (b[i] == '1') {
			empty = false;
			break;
		}
	}

	for (int i=0; i<l; i++) {
		if (a[i] == '1') {
			cout << (empty ? "NO": "YES");
			return 0;
		}
	}

	cout << (empty ? "YES" : "NO");
	return 0;
}
