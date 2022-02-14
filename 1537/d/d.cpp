// youngjinp20
// 2021 06

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#define MAX 1000
using namespace std;

typedef long long ll;

bool dfs(int n) {
	if (n == 2) return 0;
	if (n == 9) return 1;
	if (n == 25) return 1;
	if (n % 2 == 1) return 0;
	while (n%2 == 0) {
		n /= 2;
	}
	bool prime = true;
	for (int i=2; i*i<=n; i++) {
		if (n%i == 0) prime = false;
	}
	return prime;
}

bool dp[MAX+1];

int main() {
	int T;
	cin >> T;

	for (int j=2; j<=MAX; j++) {
		for (int i=2; i*i<=j; i++) {
			if (j%i == 0 && (dp[j-i] == 0 || dp[j-j/i] == 0)) {
				dp[j] = 1;
				break;
			}
		}
		cout << imie(j) imie(dp[j]) << endl;
	}

	for (int t=0; t<T; t++) {
		int N;
		cin >> N;
		cout << (dfs(N) ? "Alice" : "Bob") << endl;
	}

	return 0;
}
