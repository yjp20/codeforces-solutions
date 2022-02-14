#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t=1; t<=T; t++) {
		int N, U, V;
		cin >> N >> U >> V;
		int A[N];

		for (int i=0; i<N; i++)  {
			cin >> A[i];
		}

		int max_deviance = 0;

		for (int i=0; i<N-1; i++)  {
			max_deviance = max(max_deviance, abs(A[i] - A[i+1]));
		}

		if (max_deviance >= 2) {
			cout << 0 << endl;
			continue;
		}

		if (max_deviance == 1) {
			cout << min(U, V) << endl;
			continue;
		}

		if (max_deviance == 0) {
			cout << min(V*2, V+U) << endl;
			continue;
		}
	}
}
