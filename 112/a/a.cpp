// youngjinp20
// 2020 04

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
using namespace std;

typedef long long ll;

int main() {
	char a[105], b[105];
	cin >> a >> b;

	int len = strlen(a);

	for (int i=0; i<len; i++) {
		if ('A' <= a[i] && a[i] <= 'Z') a[i] += 'a' - 'A';
		if ('A' <= b[i] && b[i] <= 'Z') b[i] += 'a' - 'A';
	}

	int v = strcmp(a,b);
	cout << ( v == 0 ? v : ( v>0 ? 1 : -1 ));

	return 0;
}
