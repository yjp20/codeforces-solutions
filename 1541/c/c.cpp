// youngjinp20
// 2021 06

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
	for (int t=0; t<T; t++) {
		int N;
		cin >> N;
		ll D[N];
		for (int i=0; i<N; i++) {
			cin >> D[i];
		}
		sort(D, D+N);
		ll sum = 0;
		ll run = 0;
		ll m = 0;
		for (int i=0; i<N; i++) {
			sum += D[i]*i-run;
			run += D[i];
			m = max(m, D[i]);
		}
		cout << m - sum << endl;
	}
	return 0;
}
