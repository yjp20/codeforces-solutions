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
	int n;
	int a[26][26][26] = {0};
	cin >> n;

	for (int i=0; i<n; i++) {
		char s[100], t[100];
		cin >> s >> t;
		int x = s[0] - 'A';
		int y = s[1] - 'A';
		int z = s[2] - 'A';
		int w = t[0] - 'A';
		a[x][y][z] ++;
		a[x][y][w] ++;
	}

	return 0;
}
