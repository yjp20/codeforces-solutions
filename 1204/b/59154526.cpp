#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, l, r;
	scanf("%d %d %d", &n, &l, &r);
	int ll = 1 << l-1;
	int rr = 1 << r-1;
	printf("%d %d", 2*ll-1+n-l, 2*rr-1+rr*(n-r));
	return 0;
}
