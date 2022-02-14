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

int W, B;
double dp[1001][1001];

double solve(int w, int b) {
	if (w <= 0) return 0;
	if (b < 0) return 0;

	if (dp[w][b] != -1) return dp[w][b];

	double sum = 0;

	sum += (double) w/(w+b);
	if (w+b>=3) {
		double choose_white = (double) w/(w+b-2)*solve(w-1, b-2);
		double choose_black = (double) (b-2)/(w+b-2)*solve(w, b-3);
		sum += (double) b/(w+b) * (b-1)/(w+b-1) * (choose_white + choose_black);
	}

	return dp[w][b] = sum;
}

int main() {
	cin >> W >> B;

	for (int i=0; i<=W; i++) {
		for (int j=0; j<=B; j++) {
			dp[i][j] = -1;
		}
	}

	printf("%.9lf\n", solve(W, B));

	return 0;
}
