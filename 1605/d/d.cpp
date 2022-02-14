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

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 2e5 + 1;

void dfs(int node, int from, bool color, vector< vector<int> > &G, stack<int> &red, stack<int> &black) {
	if (color) red.push(node);
	else black.push(node);

	for (auto e : G[node]) {
		if (e == from) {
			continue;
		}
		dfs(e, node, !color, G, red, black);
	}
}

void solve() {
	int N;
	cin >> N;
	int K[N+1];
	bool U[N+1];
	vector< vector<int> > G(N+1);
	stack<int> black;
	stack<int> red;

	for (int i=1; i<=N; i++) {
		U[i] = false;
	}

	for (int i=1; i<N; i++) {
		int x, y;
		cin >> x >> y;
		G[x].push_back(y);
		G[y].push_back(x);
	}

	dfs(1, 0, false, G, red, black);
	if (red.size() > black.size()) {
		swap(red, black);
	}

	for (int i=1; i<=red.size(); i<<=1) {
		if (i & red.size()) {
			for (int j=i; j<i*2; j++) {
				int top = red.top();
				K[top] = j;
				U[j] = true;
				red.pop();
			}
		}
	}

	int idx = 1;
	while (!black.empty()) {
		while (U[idx]) idx ++;
		K[black.top()] = idx ++;
		black.pop();
	}

	for (int i=1; i<=N; i++) {
		cout << K[i] << " ";
	}
	cout << endl;
}

int main() {
	int T;
	cin >> T;

	for (int t=0; t<T; t++) {
		solve();
	}

	return 0;
}
