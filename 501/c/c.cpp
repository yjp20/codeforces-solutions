// youngjinp20
// 2020 08

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const int MAX = 1<<16;
int d[MAX];
int s[MAX];
vector<int> leaf;

void dfs(int node) {
	int next = s[node];
	s[node] = 0;
	d[next] --;
	s[next] ^= node;
	cout << node << " " << next << endl;
	if (d[next] != 1) {
		return;
	}
	dfs(next);
}

int main() {
	int N;
	int ct=0;
	cin >> N;

	for (int i=0; i<N; i++) {
		cin >> d[i] >> s[i];
		ct += d[i];
		if (d[i] == 1) leaf.push_back(i);
	}

	cout << ct/2 << endl;

	for (auto e : leaf) {
		if (d[e]) {
			d[e] --;
			dfs(e);
		}
	}

	return 0;
}
