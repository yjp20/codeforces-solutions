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

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		ll A[N];

		for (int i=0; i<N; i++) cin >> A[i];

		ll best = 0;
		for (int i=0; i<N-1; i++) {
			best = max(best, A[i] * A[i+1]);
		}

		cout << best << endl;
	}

	return 0;
}
