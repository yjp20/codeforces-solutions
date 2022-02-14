// youngjinp20
// 2019 11

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int x, y;
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			int t;
			cin >> t;
			if (t == 1) {
				x = i;
				y = j;
			}
		}
	}

	printf("%d\n", abs(x-2) + abs(y-2));

	return 0;
}
