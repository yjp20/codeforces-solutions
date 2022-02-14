// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int main() {
	int n;
	pii a[1000];
	int b[1000];
	int sum=0;

	cin >> n;
	for (int i=0; i<n; i++) a[i].second = i;
	for (int i=0; i<n; i++) cin >> a[i].first;
	sort(a, a+n, greater<pii>());
	for (int i=0; i<n; i++) {
		sum += a[i].first*i+1;
		b[i] = a[i].second;
	}

	cout << sum << "\n";
	for (int i=0; i<n; i++) {
		cout << b[i]+1 << " ";
	}

	return 0;
}
