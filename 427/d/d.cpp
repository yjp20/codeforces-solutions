// youngjinp20
// 2021 11

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<unordered_set>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 5000;

char S1[MAX+1], S2[MAX+1];
int N, M;
int dp[MAX+1][MAX+1];
int dp1[MAX+1];
int dp2[MAX+1];

typedef pair<int, ll> Hash;

void gen(char *a, char *b, int x, int y) {
	for (int i=0; i<x; i+=1) {
		for (int j=0; j<y; j+=1) {
			if (i == 0 || j == 0) {
				dp[i][j] = a[i] == b[j];
				continue;
			}

			if (a[i] == b[j]) {
				dp[i][j] = dp[i-1][j-1] + 1;
				continue;
			}

			dp[i][j] = 0;
		}
	}
}

int main() {
	cin >> S1;
	cin >> S2;

	N = strlen(S1);
	M = strlen(S2);

	gen(S1, S1, N, N);
	for (int i=0; i<N; i+=1) {
		for (int j=0; j<N; j+=1) {
			if (i == j) continue;
			dp1[i] = max(dp1[i], dp[i][j]);
		}
	}

	gen(S2, S2, M, M);
	for (int i=0; i<M; i+=1) {
		for (int j=0; j<M; j+=1) {
			if (i == j) continue;
			dp2[i] = max(dp2[i], dp[i][j]);
		}
	}

	int best = MAX + 1;
	gen(S1, S2, N, M);
	for (int i=0; i<N; i+=1) {
		for (int j=0; j<M; j+=1) {
			if (dp1[i] < dp[i][j] && dp2[j] < dp[i][j]) {
				best = min(best, 1 + max(dp1[i], dp2[j]));
			}
		}
	}

	if (best == MAX + 1) {
		cout << -1;
		return 0;
	}

	cout << best;
}
