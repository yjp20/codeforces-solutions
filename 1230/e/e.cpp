// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int n;
int x[100001];
vi C[100001];

int main() {
	cin >> n;
	for (int i=1; i<=n; i++) cin >> x[i];
	for (int i=1; i<n ;i++) {
		int u, v;
		cin >> u >> v;
		C[u].push_back(v);
	}


	return 0;
}
