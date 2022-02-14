// youngjinp20
// 2020 07

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int N, M;
bool visited[101];
vector<int> A[101];
vector<int> R[101];

void dfs(int v) {
	for (auto lang:A[v]) {
		for (auto e:R[lang]) {
			if (!visited[e]) {
				visited[e] = true;
				dfs(e);
			}
		}
	}
}

int main() {
	cin >> N >> M;
	int ct = 0;
	bool flag = false;
	for (int i=0; i<N; i++) {
		int k;
		cin >> k;
		flag = flag || (k ? true : false);
		for (int j=0; j<k; j++) {
			int t;
			cin >> t;
			A[i].push_back(t);
			R[t].push_back(i);
		}
	}

	for (int i=0; i<N; i++) {
		ct += !visited[i];
		visited[i] = true;
		dfs(i);
	}

	cout << ct-1 + !flag << endl;

	return 0;
}
