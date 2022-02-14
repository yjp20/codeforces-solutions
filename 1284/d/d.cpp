// youngjinp20
// 2020 01

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

const int MAX = 100005;

int n;
int sa[MAX];
int ea[MAX];
int sb[MAX];
int eb[MAX];

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> sa[i] >> ea[i] >> sb[i] >> eb[i];
	}
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if ((max(sa[i], sa[j]) <= min(ea[i], ea[j])) != (max(sb[i], sb[j]) <= min(eb[i], eb[j]))) {
				puts("NO");
				return 0;
			}
		}
	}
	puts("YES");
	return 0;
}
