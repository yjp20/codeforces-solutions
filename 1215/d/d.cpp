// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int calc(int fe, int f, int l) {
	int diff = l-f;
	if (fe%2 == 0 && diff%9 == 0 && diff/9 == fe/2) return 1;
	return -1;
}

int main() {
	int n;
	char s[200005];
	scanf("%d\n%s", &n, s);
	int f=0, l=0;
	int fe=0, le=0;
	for (int i=0; i<n/2; i++) {
		if (s[i] == '?') fe ++;
		else f += s[i] - '0';
		if (s[i+n/2] == '?') le ++;
		else l += s[i+n/2] - '0';
	}
	if (le > fe) {
		swap(fe,le);
		swap(f,l);
	}
	fe -= le;
	if (calc(fe, f, l) == 1) puts("Bicarp");
	else puts("Monocarp");
	return 0;
}
