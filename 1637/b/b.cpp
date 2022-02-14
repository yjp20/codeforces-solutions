// yjp20
// 2022 02

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
		int A[N];

		for (int i=0; i<N; i++) {
			cin >> A[i];
		}

		int dp[N][N];
		int mex[N][N];

		for (int i=0; i<N; i++) {
			int used[101] = {0};

			for (int j=i; j<N; j++) {
				if (A[i] <= 100) used[A[i]] = true;
				for (mex[i][j]=0; used[mex[i][j]] && mex[i][j] <= 100; mex[i][j]++);
			}
		}

		for (int i=0; i<N; i++) {
			for (int j=i; j<N; j++) {
				dp[i][j] = mex[i][j] + 1;
			}
		}

		for (int k=0; k<N; k++) {
			for (int i=0; i<N; i++) {
				for (int j=i+k+1; j<N; j++) {
					dp[i][j] = max(dp[i][j], dp[i][i+k] + dp[i+k+1][j]);
				}
			}
		}

		long long sum = 0;
		for (int i=0; i<N; i++) {
			for (int j=i; j<N; j++) {
				sum += dp[i][j];
			}
		}

		cout << sum << endl;
	}

	return 0;
}
