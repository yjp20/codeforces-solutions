// youngjinp20
// 2020 03

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, m;
int a[100005];

int ml[100005];
int mr[100005];

int main() {
	cin >> n >> m;

	for (int i=0; i<n; i++) {
		cin >> a[i];
		ml[i] = mr[i] = i;
	}

	for (int i=0; i<n-1; i++) {
		if (a[i+1] <= a[i]) ml[i+1] = ml[i];
	}

	for (int i=n-1; i>0; i--) {
		if (a[i-1] <= a[i]) mr[i-1] = mr[i];
	}

	for (int i=0; i<m; i++) {
		int l, r;
		cin >> l >> r;
		l --;
		r --;
		if (mr[l] == mr[r] || ml[l] == ml[r] || mr[l] >= ml[r])
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

	return 0;
}

// 1 3 6 7 9
// 3 7
//
