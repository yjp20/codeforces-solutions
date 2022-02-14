// youngjinp20
// 2021 07

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

int T;

int main() {
	cin >> T;
	while (T--) {
		ll N, K;
		cin >> N >> K;
		ll A[N];

		for (int i=0; i<N; i++) {
			cin >> A[i];
		}

		ll best = -1e18;
		for (ll i=max(N-500, 0LL); i<N; i++) {
			for (ll j=i+1; j<N; j++) {
				best = max(best, (i+1) * (j+1) - (A[i] | A[j]) * K);
			}
		}
		cout << best << endl;
	}

	return 0;
}
