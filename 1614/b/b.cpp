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
#include<numeric>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

int main() {
	int T;
	cin >> T;
	for (int t=0; t<T; t++) {
		int N;
		cin >> N;
		int A[N];
		int order[N];
		for (int i=0; i<N; i++) {
			cin >> A[i];
		}
		iota(order, order+N, 0);
		sort(order, order+N, [&](int a, int b) { return A[a] > A[b]; });
		int ans[N];
		ll ct = 0;
		for (int i=0; i<N; i++) {
			if (i % 2) {
				ans[order[i]] = i/2 + 1;
				ct += (ll) (i/2 + 1) * A[order[i]];
			} else {
				ans[order[i]] = -i/2 - 1;
				ct += (ll) (i/2 + 1) * A[order[i]];
			}
		}
		cout << ct * 2 << endl;
		cout << 0 << " ";
		for (int i=0; i<N; i++) {
			cout << ans[i] << " ";
		}
		cout << endl;
	}

	return 0;
}
