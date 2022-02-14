// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAX = 1e5;
int n;
int a[MAX];

int main() {
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	for (int i=0; i<n-2; i++) {
		if (a[i] + a[i+1] > a[i+2]) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;
}
