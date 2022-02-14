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

const int INF = 1e9;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int W, H;
		int X1, Y1, X2, Y2;
		int A, B;
		cin >> W >> H;
		cin >> X1 >> Y1 >> X2 >> Y2;
		cin >> A >> B;

		int ans = INF;

		if (X2-X1+A <= W) {
			ans = min({ans, max(A-W+X2, 0), max(A-X1, 0)});
		}
		if (Y2-Y1+B <= H) {
			ans = min({ans, max(B-H+Y2, 0), max(B-Y1, 0)});
		}

		cout << (ans == INF ? -1 : ans) << endl;
	}

	return 0;
}
