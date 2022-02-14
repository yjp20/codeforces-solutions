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
		int M;
		cin >> M;
		int A[M], B[M];
		for (int i=0; i<M; i++) cin >> A[i];
		for (int i=0; i<M; i++) cin >> B[i];

		int a=0, b=0;
		for (int i=0; i<M; i++) {
			a += A[i];
		}

		int best = 1e9;
		for (int i=0; i<M; i++) {
			a -= A[i];
			best = min(best, max(a, b));
			b += B[i];
		}

		cout << best << endl;
	}

	return 0;
}
