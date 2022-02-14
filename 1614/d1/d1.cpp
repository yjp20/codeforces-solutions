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

const int MAX_N = 1e5;
const int MAX = 5e6;
int N;
int A[MAX_N];
ll dp[MAX+1];
int divisors[MAX_N];

int main() {
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> A[i];
	}
	sort(A, A+N);

	for (int i=0; i<N; i++) {
		int ct = 0;
		for (int j=1; j*j<=A[i]; j++) {
			if (A[i] % j == 0) {
				divisors[ct++] = j;
				if (A[i] / j != j) divisors[ct++] = A[i]/j;
			}
		}
		sort(divisors, divisors+ct, greater<int>());
		for (int a=0; a<ct; a++) {
			ll best = 0;
			for (int b=a; b<ct; b++) {
				if (divisors[a] % divisors[b] == 0) best = max(best, dp[divisors[b]]);
			}
			dp[divisors[a]] = best + divisors[a] - 1;
		}
		/* for (int j=0; j<=A[i]; j++) { */
		/* 	if (dp[j] != 0) */
		/* 	cout << d(j) d(dp[j]) << endl; */
		/* } */
	}

	cout << *max_element(dp, dp+MAX+1) + N << endl;

	return 0;
}
