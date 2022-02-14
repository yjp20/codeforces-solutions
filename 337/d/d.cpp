// youngjinp20
// 2021 06

#include <algorithm>
#include <iostream>
#include <math.h>
#include <queue>
#include <stack>
#include <stdio.h>
#include <utility>
#include <vector>

#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const int MAX = 1e5;
int N, M, D;
int calc;
bool in_P[MAX+5];
vector<int> G[MAX+5];
vector<int> dp[MAX+5];

// dumb caching bullshit
pair<int,int> m1[MAX+5];
pair<int,int> m2[MAX+5];
int visited[MAX+5];

int solve(int from, int idx) {
	calc ++;

	if (dp[from][idx] != -1) {
		return dp[from][idx];
	}

	int v = G[from][idx];
	int best = in_P[v];

	if (visited[v] != 2) {
		for (int i=0; i<G[v].size(); i++) {
			int to = G[v][i];
			if (to != from) {
				int k = solve(v, i);
				if (k>0) best = max(best, k+1);
				if (to != m1[v].second && to != m2[v].second) {
					if (m1[v].first < k+1) {
						m2[v] = m1[v];
						m1[v] = { k+1, to };
					} else if (m2[v].first < k+1) {
						m2[v] = { k+1, to };
					}
				}
			}
		}
		visited[v] ++;
	}
	else {
		best = max(best, m1[v].second != from ? m1[v].first : m2[v].first);
	}

	dp[from][idx] = best;
	return best;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M >> D;

	for (int i=0; i<M; i++) {
		int P;
		cin >> P;
		in_P[P] = 1;
	}

	for (int i=0; i<N-1; i++) {
		int A, B;
		cin >> A >> B;
		G[A].push_back(B);
		G[B].push_back(A);
		dp[A].push_back(-1);
		dp[B].push_back(-1);
	}

	int ct = 0;
	for (int i=1; i<=N; i++) {
		int best = 0;
		for (int j=0; j<G[i].size(); j++)
			best = max(best, solve(i,j));
		ct += best <= D;
	}

	cout << ct << endl;
	return 0;
}
