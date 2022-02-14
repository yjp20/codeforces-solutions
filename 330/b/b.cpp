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

const int MAX = 1e3+1;
int N, M;
int G[MAX][MAX];
bool visited[MAX];

void dfs(int v, int d) {
	visited[v] = true;
}

int main() {
	cin >> N >> M;

	for (int i=0; i<M; i++) {
		int a, b;
		cin >> a >> b;
		visited[a] = true;
		visited[b] = true;
	}

	cout << N-1 << endl;

	for (int i=1; i<=N; i++) {
		if (!visited[i]) {
			for (int j=1; j<=N; j++) {
				if (j!=i) printf("%d %d\n", i, j);
			}
			break;
		}
	}

	return 0;
}
