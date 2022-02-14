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

		int A[N];
		int B[N];

		for (int i=0; i<N; i++)
			cin >> A[i];
		for (int i=0; i<N; i++)
			cin >> B[i];

		sort(A, A+N);
		sort(B, B+N);

		ll a=0, b=0;

		for (int i=N/4; i<N; i++) {
			a += A[i];
			b += B[i];
		}

		int a_it = N/4;
		int b_it = N/4;

		int it=0;
		while (a < b) {
			it ++;
			if ((it + N) % 4 == 0) {
				a -= A[a_it++];
			} else {
				if (b_it > 0) b += B[--b_it];
			}
			a += 100;
		}

		cout << it << endl;
	}

	return 0;
}
