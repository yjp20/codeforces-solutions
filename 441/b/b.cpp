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

const int MAX = 3e3+5;
int N, V;
int dp[MAX];

int main() {
	cin >> N >> V;

	for (int i=0; i<N; i++) {
		int a, b;
		cin >> a >> b;
		dp[a] += b;
	}

	int sum = 0;
	for (int i=1; i<=3001; i++) {
		int x = min(V, dp[i-1]);
		int y = min(V-x, dp[i]);
		dp[i-1] -= x;
		dp[i] -= y;
		sum += x + y;
	}

	cout << sum;

	return 0;
}
