// youngjinp20
// 2021 07

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 1e5;
int t;
char S[MAX+1];
char T[MAX+1];

int main() {
	cin >> t;
	while (t--) {
		cin >> S >> T;
		int slen = strlen(S);
		int tlen = strlen(T);
		int st = 0;
		int dp[MAX+1] = {};
		for (int i=abs(slen-tlen)%2; i<slen; i+=2) {
			if (S[i] == T[0]) {
				dp[i] = 1;
				st = i;
				break;
			}
		}
		for (int i=st+1; i<slen; i++) {
			if (i>=1 && S[i] == T[dp[i-1]]) dp[i] = max(dp[i], dp[i-1]+1);
			if (i>=2)                       dp[i] = max(dp[i], dp[i-2]);
		}
		cout << (dp[slen-1] == tlen ? "YES" : "NO") << endl;
	}

	return 0;
}
