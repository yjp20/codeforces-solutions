// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAX = 1e5;
int n;
int a[MAX];
int b[MAX];

int main() {
	cin >> n;

	for (int i=0; i<n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}

	sort(b, b+n);

	int ct = 0;
	for (int i=0; i<n; i++) {
		if (a[i] != b[i]) ct ++;
	}

	printf("%s", ct <= 2 ? "YES" : "NO");

	return 0;
}
