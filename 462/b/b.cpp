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

const int MAX = 1e5+5;
char input[MAX];
int N, K;
int ct[26];

int main() {
	cin >> N >> K;
	cin >> input;

	for (int i=0; i<N; i++) {
		ct[input[i] - 'A'] ++;
	}

	sort(ct, ct+26, greater<int>());

	ll ans = 0;
	for (int i=0; i<26; i++) {
		ll num = min(K, ct[i]);
		ans += num * num;
		K -= num;
	}

	cout << ans;

	return 0;
}
