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

const int MOD = 1e9 + 7;
const int MAX = 2000 + 1;
int N, D;
int A[MAX];

vector<int> G[MAX];

ll dfs(int v, int from, int root) {
	ll mult = 1;
	for (auto e : G[v]) {
		if (e == from) continue;
		if (A[e] < A[root] || A[e] > A[root] + D) continue;
		if (A[e] == A[root] && e < root) continue;
		mult *= dfs(e, v, root) + 1;
		mult %= MOD;
	}
	return mult;
}

int main() {
	cin >> D >> N;
	for (int i=1; i<=N; i++) {
		cin >> A[i];
	}

	for (int i=0; i<N-1; i++) {
		int U, V;
		cin >> U >> V;
		G[U].push_back(V);
		G[V].push_back(U);
	}

	ll sum = 0;
	for (int i=1; i<=N; i++) {
		sum += dfs(i, 0, i);
		sum %= MOD;
	}

	cout << sum << endl;
	return 0;
}
