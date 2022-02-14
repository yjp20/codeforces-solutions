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

const int MAX = 2e5;
int sum[MAX+1][20];

int main() {
	for (int i=1; i<=MAX; i++) {
		for (int j=0; j<20; j++) {
			sum[i][j] = sum[i-1][j] + ((i >> j) & 1);
		}
	}

	int T;
	cin >> T;

	for (int t=0; t<T; t++) {
		int L, R;
		cin >> L >> R;
		int ct = R-L+1;

		int m = 0;
		for (int j=0; j<20; j++) {
			m = max(m, sum[R][j] - sum[L-1][j]);
		}

		cout << ct - m << endl;
	}

	return 0;
}
