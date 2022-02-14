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

vector<int> G[50];
bool visited[50];
vector<int> ones;
vector<pair<int,int>> twos;
vector<tuple<int,int,int>> threes;

void dfs(int v, vector<int> &l) {
	l.push_back(v);
	for (auto e : G[v]) {
		if (!visited[e]) {
			visited[e] = true;
			dfs(e, l);
		}
	}
}

int main() {
	int N, M;
	cin >> N >> M;

	for (int i=0; i<M; i++) {
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	for (int i=1; i<=N; i++) {
		if (!visited[i]) {
			vector<int> l;
			visited[i] = true;
			dfs(i, l);

			if (l.size() == 1) {
				ones.push_back(l[0]);
			} else if (l.size() == 2) {
				twos.push_back({l[0], l[1]});
			} else if (l.size() == 3) {
				threes.push_back({l[0], l[1], l[2]});
			} else {
				cout << "-1" << endl;
				return 0;
			}
		}
	}

	if (twos.size() > ones.size()) {
		cout << "-1" << endl;
		return 0;
	}

	for (int i=0; i<threes.size(); i++) {
		auto [ a, b, c ] = threes[i];
		printf("%d %d %d\n", a, b, c);
	}

	for (int i=0; i<twos.size(); i++) {
		printf("%d %d %d\n", twos[i].first, twos[i].second, ones[i]);
	}

	for (int i=twos.size(); i<ones.size(); i+=3) {
		printf("%d %d %d\n", ones[i], ones[i+1], ones[i+2]);
	}

	return 0;
}
