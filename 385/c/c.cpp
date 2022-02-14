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

const int MAX_N = 1e6;
const int MAX = 1e7;
const int MAX_PRIME = 3200;
int N, M;
int X[MAX_N];

int dp[MAX+1];
bool is_notprime[MAX_PRIME+1];
vector<int> primes;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i=2; i<=MAX_PRIME; i++) {
		if (!is_notprime[i]) {
			primes.push_back(i);
			for (int j=i*2; j<=MAX_PRIME; j+=i) {
				is_notprime[j] = true;
			}
		}
	}

	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> X[i];
		for (int j : primes) {
			if (X[i] % j == 0) dp[j] ++;
			while (X[i] % j == 0) X[i] /= j;
		}
		if (X[i] > 1) dp[X[i]] ++;
	}

	for (int i=1; i<=MAX; i++) {
		dp[i] += dp[i-1];
	}

	cin >> M;
	for (int i=0; i<M; i++) {
		int L, R;
		cin >> L >> R;
		cout << dp[min(R, MAX)] - dp[min(L-1, MAX)] << endl;
	}

	return 0;
}
