// youngjinp20
// 2021 08

#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>
#include<numeric>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 1e5;
int A[MAX];
int order[MAX];

int main() {
	int T;
	scanf("%d", &T);

	while (T--) {
		int N, K;
		scanf("%d %d", &N, &K);

		int ct = 1;
		for (int i=0; i<N; i++) {
			scanf("%d", &A[i]);
		}

		iota(order, order+N, 0);
		stable_sort(order, order+N, [](int a, int b) { return A[a] < A[b]; });
		for (int i=0; i<N; i++) {
			A[order[i]] = i;
		}

		for (int i=1; i<N; i++) {
			if (A[i] != A[i-1] + 1) ct ++;
		}

		printf(ct <= K ? "Yes\n" : "No\n");
	}

	return 0;
}
