// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
typedef unsigned long long ll;

int n;
ll  a[7001];
int b[7001];
int val[7001];
bool use[7001];

int main() {
	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
	for (int i=0; i<n; i++) cin >> b[i];

	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			ll x = a[i]^a[j];
			if (a[i]&x) val[i]++;
			if (a[j]&x) val[j]++;
		}
	}

	for (int i=0; i<n; i++) {
		bool flag = false;
		for (int j=0; j<n; j++) {
			if (val[j] == n-i-1 && !use[j]) {
				flag = true;
				use[j] = true;
				for (int k=0; k<n; k++) {
					ll x = a[j]^a[k];
					if (a[k]&x) val[k]--;
				}
			}
		}
		if (!flag) break;
	}

	ll sum=0;
	for (int i=0; i<n; i++) {
		if (!use[i]) sum += b[i];
	}

	cout << sum;

	return 0;
}
