// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int n;
pi d[100001];

int main() {
	cin >> n;
	for (int i=1; i<=n; i++) {
		d[i].first = i;
		cin >> d[i].second;
	}
	return 0;
}
