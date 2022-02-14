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
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf("%c", (i+j)%2==0 ? 'W' : 'B');
		}
		puts("");
	}

	return 0;
}
