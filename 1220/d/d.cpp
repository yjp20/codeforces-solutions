// youngjinp20
// 2019 09
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int n;
	int o=0, e=0;
	int mi_idx=0;
	int mi_val=1e9;
	ll ori[200005];
	ll arr[200005];
	ll arr1[200005];
	vector<ll> ans;


	scanf("%d\n", &n);
	for (int i=0; i<n; i++) {
		scanf("%lld", &ori[i]);
		arr[i] = arr1[i] = ori[i];
	}

	for (int s=0; s<64; s++) {
		int ct = 0;
		for (int i=0; i<n; i++) {
			ll sft = arr[i] >> s;
			if (sft%2 == 0) ct ++;
			else arr[i] = 0;
		}
		if (ct < mi_val) {
			mi_val = ct;
			mi_idx = s;
		}
	}

	printf("%d\n", mi_val);
	for (int s=0; s <= mi_idx; s++) {
		int ct = 0;
		for (int i=0; i<n; i++) {
			ll sft = arr1[i] >> s;
			if (sft%2 == 0) {
				if (s == mi_idx) printf("%lld ", ori[i]);
			}
			else arr1[i] = 0;
		}
	}

	return 0;
}
