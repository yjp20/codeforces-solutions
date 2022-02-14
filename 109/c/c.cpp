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

const int MAX = 1e5;
int N;
vector<pair<int, bool>> G[MAX+1];
pair<int, int> down[MAX+1], up[MAX+1];

pair<int, int> dfs(int v, int from=0) {
	int counted = 0;
	int uncounted = 0;
	for (auto e : G[v]) {
		if (e.first == from) continue;
		auto val = dfs(e.first, v);
		if (e.second) {
			counted += val.first;
			counted += val.second;
			counted ++;
		}
		else {
			counted += val.first;
			uncounted += val.second;
			uncounted ++;
		}
	}
	return down[v] = { counted, uncounted };
}

void dfs2(int v, int from=0) {
	for (auto e : G[v]) {
		if (e.first == from) continue;
		int x = down[v].first + up[v].first - down[e.first].first;
		int y = down[v].second + up[v].second - down[e.first].second;
		if (e.second) up[e.first] = { x+y, 0 };
		else up[e.first] = { x, y };
		dfs2(e.first, v);
	}
}

int main() {
	cin >> N;
	for (int i=0; i<N-1; i++) {
		int U, V, W;
		cin >> U >> V >> W;
		bool is_lucky = true;
		while (W) {
			if (W % 10 != 4 && W % 10 != 7) {
				is_lucky = false;
				break;
			}
			W /= 10;
		}
		G[U].push_back({ V, is_lucky });
		G[V].push_back({ U, is_lucky });
	}

	dfs(1);
	dfs2(1);

	ll sum=0;
	for (int i=1; i<=N; i++) {
		ll x = up[i].first + down[i].first;
		sum += x * x - x;
	}

	cout << sum << endl;

	return 0;
}
