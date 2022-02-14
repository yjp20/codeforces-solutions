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
int N, D;
int A[MAX];

int main() {
	cin >> N >> D;
	for (int i=0; i<N; i++) {
		cin >> A[i];
	}

	ll sum=0;
	ll r=0;
	for (ll l=0; l<N; l++) {
		while (r < N && A[r] <= A[l] + D) {
			r++;
		}

		if (r-l>=3) {
			sum += (r-l-1) * (r-l-2) / 2;
		}
	}

	cout << sum << endl;

	return 0;
}
