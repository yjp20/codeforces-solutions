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

const int MAX = 1e5;
int N, M, W;
int A[MAX];
int added[MAX];

int main() {
	cin >> N >> M >> W;
	for (int i=0; i<N; i++)
		cin >> A[i];

	int l=1, r=1.1e9;
	while (r - l > 1) {
		int mid = (l+r)/2;
		ll used = 0;
		ll sum = 0;

		for (int i=0; i<N; i++) {
			if (i-W >= 0) sum -= added[i-W];
			ll diff = max(mid - A[i] - sum, 0LL);
			added[i] = diff;
			used += diff;
			sum += diff;
		}

		if (used > M) {
			r = mid;
		} else {
			l = mid;
		}
	}

	cout << l << endl;

	return 0;
}
