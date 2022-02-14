// youngjinp20
// 2021 11

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

int main() {
	int T;
	cin >> T;
	for (int t=0; t<T; t++) {
		int N, L, R, K;
		cin >> N >> L >> R >> K;
		int A[N];
		for (int i=0; i<N; i+=1) {
			cin >> A[i];
		}

		sort(A, A+N);
		int ct = 0;
		for (int i=0; i<N; i+=1) {
			if (L <= A[i] && A[i] <= R && K - A[i] >= 0) {
				K -= A[i];
				ct ++;
			}
		}
		cout << ct << endl;
	}

	return 0;
}
