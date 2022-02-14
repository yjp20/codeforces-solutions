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

ll N, A, B;

int main() {
	cin >> N >> A >> B;
	bool swapped = false;
	ll space = 6*N;

	ll best = 1e18;
	pair<ll,ll> best_pair;

	if (A*B >= space) {
		cout << (A*B) << endl;
		cout << A << " " << B << endl;
		return 0;
	}

	if (B<A) {
		swap(A,B);
		swapped = true;
	}

	for (ll i=A; i*i <= space; i++) {
		ll other = max((space + i - 1) / i, B);
		ll diff = i * other - N;
		if (best > diff) {
			best = diff;
			best_pair = {i, other};
		}
	}

	cout << best_pair.first * best_pair.second << endl;
	if (!swapped) cout << best_pair.first << " " << best_pair.second << endl;
	else cout << best_pair.second << " " << best_pair.first << endl;

	return 0;
}
