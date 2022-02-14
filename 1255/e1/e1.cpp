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
	int n;
	int sum=0;
	ll best = 1e15;
	vector<ll> loc;
	cin >> n;
	for (int i=0; i<n; i++) {
		int tmp;
		cin >> tmp;
		sum += tmp;
		if (tmp) loc.push_back(i);
	}
	if (sum == 1) {
		puts("-1");
		return 0;
	}

	for (int i=2; i<=sum; i++) {
		if (sum%i == 0) {
			ll ct = 0;
			for (int j=0; j<sum; j+=i) {
				for (int k=j; k<j+i; k++) {
					ct += abs(loc[k] - loc[j+i/2]);
				}
			}
			best = min(ct, best);
		}
	}

	cout << best;

	return 0;
}
