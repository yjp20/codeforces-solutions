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

const int MAX = 2e5;
int T, N;
int H[MAX];
int dp[MAX];

int main() {
	cin >> T;
	for (int t=0; t<T; t++) {
		int N;
		cin >> N;
		for (int i=0; i<N; i++) {
			cin >> H[i];
		}
		int l=1, r=1e9+1;
		while (r - l > 1) {
			int mid = (l+r) / 2;
			bool bad = false;

			for (int i=0; i<N; i++) {
				dp[i] = H[i];
			}

			for (int i=N-1; i>=0; i--) {
				if (dp[i] < mid) {
					bad = true;
					break;
				}
				if (i>=2) {
					int ct = min(dp[i] - mid, H[i]) / 3;
					dp[i-2] += ct * 2;
					dp[i-1] += ct;
					dp[i] -= ct * 3;
				}
			}

			if (bad) {
				r = mid;
			} else {
				l = mid;
			}
		}

		cout << l << endl;
	}

	return 0;
}
