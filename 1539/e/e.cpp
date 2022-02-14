// youngjinp20
// 2021 06

#include<stdio.h>
#include<cmath>
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const int MAX = 1e5;
int N, M;
int K[MAX];
int AL[MAX], BL[MAX];
int AR[MAX], BR[MAX];
int history[MAX];

void solve(int i, int l, int r) {
	// cout << imie(i) imie(l) imie(r) << endl;
	if (i == N) {
		cout << "Yes" << endl;
		for (int j=0; j<N; j++) cout << history[j] << " ";
		exit(0);
	}
	history[i] = 0;
	if (
		AL[i] <= K[i] && K[i] <= BL[i] &&
		AR[i] <= r    && r    <= BR[i]
	) solve(i+1, K[i], r);
	history[i] = 1;
	if (
		AL[i] <= l    && l    <= BL[i] &&
		AR[i] <= K[i] && K[i] <= BR[i]
	) solve(i+1, l, K[i]);
}

int main() {
	cin >> N >> M;
	for (int i=0; i<N; i++) {
		cin >> K[i];
		cin >> AL[i] >> BL[i];
		cin >> AR[i] >> BR[i];
	}
	solve(0, 0, 0);

	cout << "No" << endl;
	return 0;
}
