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
#include<iomanip>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N;
		scanf("%d", &N);
		double sum = 0;
		double best = -1e18;
		for (int i=0; i<N; i++) {
			double A;
			scanf("%lf", &A);
			sum += A;
			best = max(A, best);
		}
		printf("%.9lf\n", (sum-best)/(N-1) + best);
	}

	return 0;
}
