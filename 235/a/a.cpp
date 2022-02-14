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

ll N;
ll best=1;

int main() {
	cin >> N;

	for (int j=0; j<=1; j++) {
		ll k = N * (N-1);
		best = max(best, k);
		for (ll i=N-2; i>=0; i--) {
			ll v = k*i/gcd(k,i);
			best = max(best, v);
		}
		N--;
	}

	cout << best << endl;

	return 0;
}
