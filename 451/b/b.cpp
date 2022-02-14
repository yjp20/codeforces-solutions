// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N;
int A[100005];
int B[100005];

int main() {
	cin >> N;

	for (int i=1; i<=N; i++) {
		cin >> A[i];
		B[i] = A[i];
	}

	sort(A+1, A+N+1);

	int l=0, r=0;
	for (int i=1; i<=N; i++) {
		if (A[i] != B[i]) {
			if (!l) l = i;
			r = i;
		}
	}

	for (int i=0; i<=r-l; i++) {
		if (A[l+i] != B[r-i]) {
			cout << "no";
			return 0;
		}
	}

	if (!l) {
		l = 1;
		r = 1;
	}

	cout << "yes" << endl;
	cout << l << " " << r;

	return 0;
}
