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

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 1e5;
ll N, R, AVG;
pair<ll, ll> BA[MAX];

ll ct, cost;

int main() {
	cin >> N >> R >> AVG;
	for (int i=0; i<N; i++) {
		cin >> BA[i].second >> BA[i].first;
		ct += BA[i].second;
	}

	sort(BA, BA+N);

	for (int i=0; i<N; i++) {
		ll diff = min(R-BA[i].second, max(AVG*N-ct, 0LL));
		cost += diff * BA[i].first;
		ct += diff;
	}

	cout << cost << endl;

	return 0;
}
