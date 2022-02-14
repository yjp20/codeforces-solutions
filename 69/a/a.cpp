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
	cin >> n;
	int x=0, y=0, z=0;
	while (n --) {
		int a, b, c;
		cin >> a >> b >> c;
		x += a;
		y += b;
		z += c;
	}
	printf("%s\n", x || y || z ? "NO" : "YES");

	return 0;
}
