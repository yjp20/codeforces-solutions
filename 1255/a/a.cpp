// youngjinp20
// 2019 11

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int t;
	int arr[5] = {0, 1, 1, 2, 2};
	cin >> t;
	for (int i=0; i<t; i++) {
		int a, b;
		cin >> a >> b;
		int diff = abs(a-b);
		printf("%d\n", diff/5 + arr[diff%5]);
	}

	return 0;
}
