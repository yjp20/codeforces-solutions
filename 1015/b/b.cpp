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
	char s[100];
	char t[100];
	vi moves;

	scanf("%d\n", &n);
	scanf("%s\n", &s);
	scanf("%s\n", &t);

	for (int i=0; i<n; i++) {
		int idx = t[i]-'A';
		for (int j=i; j<=n; j++) {
			if (j == n) {
				puts("-1");
				return 0;
			}
			if (s[j] == t[i]) {
				for (int k=j-1; k>=i; k--) {
					swap(s[k], s[k+1]);
					moves.push_back(k+1);
				}
				break;
			}
		}
	}

	printf("%d\n", moves.size());
	for (auto e : moves) {
		printf("%d ", e);
	}

	return 0;
}
