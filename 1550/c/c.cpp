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
	for (int t=0; t<T; t++) {
		int N;
		cin >> N;
		int A[N];
		for (int i=0; i<N; i++) {
			cin >> A[i];
		}


		ll ones = N;
		ll pairs = N - 1;
		ll triplets = 0;
		ll quadruplets = 0;
		for (int i=0; i<N-2; i++) {
			triplets +=
				(A[i] < A[i+1] && A[i+1] > A[i+2]) ||
				(A[i] > A[i+1] && A[i+1] < A[i+2]);
		}
		for (int i=0; i<N-3; i++) {
			quadruplets +=
				(A[i] < A[i+1] && A[i] > A[i+2] && A[i+3] < A[i+1] && A[i+3] > A[i+2]) ||
				(A[i] > A[i+1] && A[i] < A[i+2] && A[i+3] > A[i+1] && A[i+3] < A[i+2]);
		}

		cout << ones + pairs + triplets + quadruplets << endl;
	}

	return 0;
}
