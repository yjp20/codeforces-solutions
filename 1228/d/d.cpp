// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int n, m;
	vector<bool> vt(100005);
	vector<int> side(100005, 0b111);
	set<int> G[100005];

	cin >> n >> m;

	for (int i=0; i<m; i++) {
		int a, b;
		cin >> a >> b;
		G[a].insert(b);
		G[b].insert(a);
	}

	bool first = true;
	int g2 = 0;

	for (int i=1; i<=n; i++) {
		if (G[1].find(i) != G[1].end()) {
			if (first) {
				g2 = i;
				first = false;
			}
			side[i] &= 0b110;
		} else {
			side[i] &= 0b001;
		}
	}

	for (int i=1; i<=n; i++) {
		if (G[g2].find(i) != G[g2].end()) {
			side[i] &= 0b101;
		} else {
			side[i] &= 0b010;
		}
	}

	for (int i=1; i<=n; i++) {
		if (side[i] != 1 && side[i] != 2 && side[i] != 4) {
			puts("-1");
			return 0;
		}
	}

	int ct1=0, ct2=0, ct3=0;

	for (int i=1; i<=n; i++) {
		switch (side[i]) {
			case 1:
				ct1 ++;
				break;
			case 2:
				ct2 ++;
				break;
			case 4:
				ct3 ++;
				break;
		}
		for (auto e:G[i]) if (side[i] == side[e]) {
			puts("-1");
			return 0;
		}
	}

	if (m != ct1*ct2 + ct2*ct3 + ct3*ct1 || !ct1 || !ct2 || !ct3){
		puts("-1");
		return 0;
	}

	for (int i=1; i<=n; i++) {
		switch (side[i]) {
			case 1:
				printf("%d ", 1);
				break;
			case 2:
				printf("%d ", 2);
				break;
			case 4:
				printf("%d ", 3);
				break;
		}
	}

	return 0;
}
