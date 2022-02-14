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
	int ctz=0, ctn=0;
	scanf("%d\n", &n);
	for (int i=0; i<n; i++) {
		char c;
		scanf("%c", &c);
		if (c == 'z') ctz ++;
		if (c == 'n') ctn ++;
	}
	for (int i=0; i<ctn; i++) {
		printf("1 ");
	}
	for (int i=0; i<ctz; i++) {
		printf("0 ");
	}
	puts("");
	return 0;
}
