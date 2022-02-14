// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

vi arr[200001];
int n, k;
int m = 1e9;

int main() {
	cin >> n >> k;
	for (int i=0; i<n; i++) {
		int t;
		cin >> t;
		arr[t].push_back(0);
		for (int j=1; t && j<20; j++) {
			t >>= 1;
			arr[t].push_back(j);
		}
	}
	for (int i=0; i<200001; i++) {
		if (arr[i].size() < k) continue;
		sort(arr[i].begin(), arr[i].end());
		int sum = 0;
		for (int j=0; j<k; j++) {
			sum += arr[i][j];
		}
		m = min(m, sum);
	}
	printf("%d\n", m);
	return 0;
}
