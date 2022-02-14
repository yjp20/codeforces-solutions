// youngjinp20
// 2020 01

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

struct Event {
	int loc;
	int idx;
	int on;
};

int main() {
	int t;
	cin >> t;
	for (int c=0; c<t; c++) {
		int n;
		cin >> n;
		set<int> use;
		vector<int> ct(n);
		vector<Event> arr;

		for (int i=0; i<n; i++) {
			int a, b;
			cin >> a >> b;
			arr.push_back({a,i,1});
			arr.push_back({b,i,0});
		}

		sort(arr.begin(), arr.end(), [](Event a, Event b){ return a.loc == b.loc ? b.on < a.on : a.loc < b.loc; });

		int cur = 0;
		int last = -1000000005;

		for (auto e : arr) {
			if (e.on) use.insert(e.idx);
			else use.erase(e.idx);
			if (!e.on) {
				if (use.size() == 1) {
					for (auto v : use) {
						ct[v] ++;
					}
				}
				if (last != e.loc && use.size() == 0) {
					ct[e.idx] --;
					cur ++;
				}
				last = e.loc;
			}
		}

		printf("%d\n", cur + *max_element(ct.begin(), ct.end()));
	}

	return 0;
}
