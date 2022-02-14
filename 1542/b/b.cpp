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
		ll N, A, B;
		scanf("%lld %lld %lld", &N, &A, &B);
		bool good = false;
		if ((N-1) % B == 0) good = true;
		if (A != 1) {
			for (ll i=1; i<=N; i*=A) {
				if ((N - i) % B == 0) good = true;
			}
		}
		printf(good ? "Yes\n" : "No\n");
	}

	return 0;
}
