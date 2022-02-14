// youngjinp20
// 2020 01

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int n;
int mins[100005];
int maxs[100005];
bool has_ascent[100005];
vi s[100005];

int main() {
	cin >> n;

	for (int i=0; i<n; i++) {
		int l;
		int f = 1e9;
		bool ascent = false;
		bool first = true;
		cin >> l;

		for (int j=0; j<l; j++) {
			int tmp;
			cin >> tmp;
			if (first) f = tmp;
			else if (tmp > f) ascent = true;
			f = tmp;
			first = false;
			s[i].push_back(tmp);
		}

		mins[i] = *min_element(s[i].begin(), s[i].end());
		maxs[i] = *max_element(s[i].begin(), s[i].end());
		has_ascent[i] = ascent;
	}

	vector<int> included_maxs;
	int d = n;
	long long ct = 0;

	for (int i=0; i<n; i++) {
		if (!has_ascent[i]) included_maxs.push_back(maxs[i]);
		else {
			ct += 2*(d--) - 1;
		}
	}

	sort(included_maxs.begin(), included_maxs.end());

	for (int i=0; i<n; i++) {
		if (!has_ascent[i]) {
			// printf("| %d: %d %d\n", i, mins[i], maxs[i]);
			auto it = upper_bound(included_maxs.begin(), included_maxs.end(), mins[i]);
			ct += d - (it - included_maxs.begin());
		}
	}

	printf("%lld", ct);

	return 0;
}
