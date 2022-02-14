// youngjinp20
// 2020 07

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const int MAX = 1e5+5;
char s[MAX];
int N;
int sum[MAX];

int main() {
	cin >> s;
	cin >> N;

	int run = 0;
	int len = strlen(s);
	for (int i=1; i<=len; i++) {
		run += s[i-1] == s[i];
		sum[i] = run;
	}

	for (int i=0; i<N; i++) {
		int L, R;
		cin >> L >> R;
		cout << sum[R-1] - sum[L-1] << endl;
	}
	return 0;
}
