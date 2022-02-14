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

double dfs(double c, double m, double v) {
	cout << d(c) d(m) << endl;
	if (c == 0 && m == 0) return 1;
	double p1 = c ? c * (1 + dfs(max(c-v, 0.), m + min(v, c)/2, v)) : 0;
	double p2 = m ? m * (1 + dfs(c + min(v, m)/2, max(m-v, 0.), v)) : 0;
	return p1 + p2 + (1 - c - m);
}

int T;

int main() {
	cin >> T;
	while (T--) {
		double C, M, P, V;
		cin >> C >> M >> P >> V;
		cout << dfs(C, M, V) << endl;
	}

	return 0;
}
