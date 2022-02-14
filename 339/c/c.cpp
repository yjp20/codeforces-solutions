// youngjinp20
// 2021 07

#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<vector>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int INF = 1e9;
char S[11];
int M;
vector<int> usable;

bool tail[11][11];
int dp[11][11];
pair<int,int> point[11][11];

int dfs(int last, int diff) {
	int best = 1;
	tail[last][diff] = 1;

	for (int e : usable) {
		if (e == last) continue;
		if (e <= diff) continue;

		int v = tail[e][e-diff]
			? INF
			: dp[e][e-diff]
			? dp[e][e-diff]
			: dfs(e, e-diff);

		if (v+1 > best) {
			best = v+1;
			point[last][diff] = {e, e-diff};
		}
	}

	tail[last][diff] = 0;
	return dp[last][diff] = best;
}

int main() {
	cin >> S >> M;

	for (int i=0; i<10; i++) {
		if (S[i] == '1') usable.push_back(i+1);
	}

	for (int i : usable) {
		for (int j=0; j<11; j++) {
			for (int k=0; k<11; k++) {
				dp[j][k] = 0;
				tail[j][k] = 0;
				point[j][k] = {0, 0};
			}
		}
		int k = dfs(i, i);
		if (k >= M) {
			cout << "YES" << endl;
			int last = i;
			int diff = i;
			for (int j=0; j<M; j++) {
				cout << last << " ";
				auto e = point[last][diff];
				last = e.first;
				diff = e.second;
			}
			return 0;
		}
	}

	cout << "NO" << endl;

	return 0;
}
