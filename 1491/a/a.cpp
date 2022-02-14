#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5;
int N, Q;
int A[MAX];
int ct=0;

int main() {
	cin >> N >> Q;
	for (int i=0; i<N; i++) cin >> A[i];
	for (int i=0; i<N; i++) ct += A[i];

	for (int i=0; i<Q; i++) {
		int t, x;
		cin >> t >> x;
		if (t == 1) {
			x --;
			ct += A[x] ? -1 : 1;
			A[x] = !A[x];
		}
		if (t == 2) {
			cout << ((int) ct >= x) << endl;
		}
	}
}
