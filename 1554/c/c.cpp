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

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;
		M++;

		int sum = 0;

		while (1) {
			int period = 1;
			while (period <= N) period <<= 1;
			sum += M / period * period;
			M %= period;

			if (M <= N) break;

			int i=31;
			while (i>=0 && (N>>i) == (M>>i)) i--;
			M &= (1 << (i+1)) - 1;
			N &= (1 << (i+1)) - 1;
		}

		cout << sum << endl;
	}
	return 0;
}
