// yjp20
// 2021 12

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

int main() {
	int T;
	cin >> T;

	for (int t=0; t<T; t++) {
		int N;
		cin >> N;
		pair<int,int> A[N];
		for (int i=0; i<N; i++) {
			cin >> A[i].first >> A[i].second;
		}

		int dp[N+3][N+3];
		for (int i=0; i<=N; i++) {
			for (int j=0; j<=N; j++) {
				dp[i][j] = i == j ? i : 0;
			}
		}
		for (int i=0; i<N; i++) {
			dp[A[i].first-1][A[i].second] = A[i].first-1;
			dp[A[i].first][A[i].second+1] = A[i].second+1;
		}
		for (int i=0; i<N; i++) {
			for (int j=0; j<N; j++) {
				if (A[i].second + 2 == A[j].first) {
					dp[A[i].first][A[j].second] = A[i].second + 1;
				}
			}
		}

		for (int i=0; i<N; i++) {
			printf("%d %d %d\n", A[i].first, A[i].second, dp[A[i].first][A[i].second]);
		}
		cout << endl;
	}

	return 0;
}
