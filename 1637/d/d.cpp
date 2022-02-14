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

const int MAX = 1e4;

int main() {
	int T;
	cin >> T;

	for (int t=0; t<T; t++) {
		int N;
		cin >> N;
		int A[N], B[N];
		long long sum = 0;
		long long offset = 0;

		for (int i=0; i<N; i++) cin >> A[i];
		for (int i=0; i<N; i++) cin >> B[i];

		bool dp[101][MAX+1] = { 0 };
		dp[0][0] = 1;
		for (int i=0; i<N; i++) {
			sum += A[i] + B[i];
			offset += A[i] * A[i] + B[i] * B[i];
			for (int j=MAX; j>=0; j--) {
				if (A[i] <= j && dp[i][j-A[i]]) dp[i+1][j] = true;
				if (B[i] <= j && dp[i][j-B[i]]) dp[i+1][j] = true;
			}
		}

		long long best;
		for (best=sum/2; best>=0; best--) {
			if (dp[N][best]) break;
		}

		cout << best * best + (sum - best) * (sum - best) + offset * (N - 2) << endl;
	}


	return 0;
}
