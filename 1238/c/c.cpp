// youngjinp20
// 2019 10

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int q;
	cin >> q;
	for (int i=0; i<q; i++) {
		int h, n, ct=0;
		int p[200001] = {0};
		cin >> h >> n;
		for (int j=0; j<n; j++) {
			cin >> p[j];
		}
		for (int j=0; j<n;) {
			if (p[j+1] == 0) break;
			else if (p[j] == p[j+1]+1 && p[j] == p[j+2]+2) {
				j+=2;
			}
			else if (p[j] == p[j+1]+1) {
				j++;
				p[j] = p[j]-1;
				ct++;
			}
			else {
				p[j] = p[j+1]+1;
			}
		}
		printf("%d\n", ct);
	}

	return 0;
}
