// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

int n, ct=0;
int a[100+1];
int used[100+1];

int main() {

	// INPUT
	cin >> n;
	for (int i=0; i<n; i++) {
		int t;
		cin >> t;
		a[i] = t;
	}

	// RUN
	for (int i=0; i<n; i++) {
		int flag = 1;
		for (int j=0; j<n; j++) {
			if (a[i] > a[j] && a[i] % a[j] == 0) {
				flag = 0;
			}
		}
		if (!used[a[i]]) ct += flag;
		used[a[i]] = true;
	}
	cout << ct;
	return 0;
}
