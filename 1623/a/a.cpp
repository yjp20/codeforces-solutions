// youngjinp20
// 2021 12

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

int main() {
	int T;
	cin >> T;
	for (int t=0; t<T; t++) {
		int N, M, RB, CB, RD, CD;
		cin >> N >> M >> RB >> CB >> RD >> CD;
		if (RD < RB) {
			RD = 2 * N - RD;
		}
		if (CD < CB) {
			CD = 2 * M - CD;
		}
		cout << min(RD-RB, CD-CB) << endl;
	}

	return 0;
}
