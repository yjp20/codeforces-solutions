// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int sec(int tries, int k) {
	int b = (tries-1)/k;
	return tries + b*5;
}

int main() {
	int n, k;
	int len[105];
	char t[105];
	scanf("%d %d\n", &n, &k);
	for (int i=0; i<=n; i++) {
		scanf("%s\n", t);
		len[i] = strlen(t);
	}

	int ctless=0;
	int cteq=0;
	for (int i=0; i<n; i++) {
		if (len[i] < len[n]) ctless ++;
		if (len[i] == len[n]) cteq ++;
	}

	printf("%d %d", sec(ctless+1,k), sec(ctless+cteq,k));

	return 0;
}
