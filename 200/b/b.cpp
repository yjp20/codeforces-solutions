// youngjinp20
// 2019 11

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	double sum = 0;
	cin >> n;

	for (int i=0; i<n; i++) {
		double t;
		cin >> t;
		sum += t;
	}

	cout << sum/n;

	return 0;
}
