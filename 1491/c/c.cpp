#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t=1; t<=T; t++) {
		int N;
		cin >> N;
		int S[N];
		int curr[N];

		for (int i=0; i<N; i++) {
			cin >> S[i];
			curr[i] = 0;
		}

		long long ans = 0;

		for (int i=0; i<N; i++) {
			int carry = curr[i];

			if (S[i]-1 > carry) {
				ans += S[i] - 1 - carry;
				carry = S[i] - 1;
			}

			for (int j=2; j<=min(S[i], N-1); j++) {
				curr[i+j] ++;
			}

			if (i+1 < N) curr[i+1] += carry - S[i] + 1;
		}

		cout << ans << endl;
	}
}

