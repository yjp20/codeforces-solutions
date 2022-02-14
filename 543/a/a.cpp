// youngjinp20
// 2021 06

#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 500;
int N, M, B, MOD;
int A[MAX];
int dp[MAX+1][MAX+1];
// dp[lines][bugs]

int main() {
	cin >> N >> M >> B >> MOD;
	for (int i=0; i<N; i++) cin >> A[i];

	dp[0][0] = 1;
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			for (int k=0; k<=B; k++) {
				if (k+A[i] <= B) {
					dp[j+1][k+A[i]] += dp[j][k];
					dp[j+1][k+A[i]] %= MOD;
				}
			}
		}
	}

	ll sum=0;
	for (int i=0; i<=B; i++) {
		sum += dp[M][i];
		sum %= MOD;
	}

	cout << sum << endl;

	return 0;
}
