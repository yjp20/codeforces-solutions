// youngjinp20
// 2020 08

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int it;
char s[200005];
char res[200005];

int main() {
	cin >> s;
	int len = strlen(s);

	for (int i=0; i<len; i++) {
		res[it] = s[i];
		if (it >= 2 && res[it] == res[it-1] && res[it-1] == res[it-2]) continue;
		if (it >= 3 && res[it] == res[it-1] && res[it-2] == res[it-3]) continue;
		it ++;
	}
	res[it] = 0;
	cout << res;

	return 0;
}
