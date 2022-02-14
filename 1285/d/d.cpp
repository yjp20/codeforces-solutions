// youngjinp20
// 2020 01

#include <bits/stdc++.h>
using namespace std;

int n;
int a[100005];

int find_min(int j, int l, int r) {
	int m = 0;
	int i = 0;
	if (j == 32) return 0;
	for (i=l; i<r && !((a[i] >> 31-j) & 1); i++);
	if (i != l && i != r) return (1 << 31-j) + min(find_min(j+1, l, i), find_min(j+1, i, r));
	else return find_min(j+1, l, r);
}

int main() {
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	printf("%d", find_min(0, 0, n));
	return 0;
}
