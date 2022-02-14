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
#include<numeric>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 1000;
int N, K;
int A[MAX][5];

int adj[MAX][MAX];
int dp[MAX];
int degree[MAX];

int main() {
	cin >> N >> K;

	for (int i=0; i<K; i++) {
		for (int j=0; j<N; j++) {
			cin >> A[j][i];
			A[j][i] --;
		}
	}

	for (int i=0; i<N; i++) {
		degree[i] = N;
		dp[i] = 1;
		for (int j=0; j<N; j++) {
			adj[i][j] = 1;
		}
	}

	for (int i=0; i<K; i++) {
		for (int j=0; j<N; j++) {
			for (int k=0; k<=j; k++) {
				auto &edge = adj[A[j][i]][A[k][i]];
				if (edge) {
					edge = 0;
					degree[A[k][i]] --;
				}
			}
		}
	}

	queue<int> order;
	for (int i=0; i<N; i++) {
		if (degree[i] == 0) order.push(i);
	}

	while (!order.empty()) {
		auto i = order.front();
		order.pop();
		for (int j=0; j<N; j++) {
			if (adj[i][j]) {
				dp[j] = max(dp[j], dp[i]+1);
				if (--degree[j] == 0) {
					order.push(j);
				}
			}
		}
	}

	cout << *max_element(dp, dp+N) <<endl;

	return 0;
}
