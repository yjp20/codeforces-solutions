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
	set<int> S;
	for (int i=0; i<4; i++) {
		int t;
		cin >> t;
		S.insert(t);
	}
	cout << 4-S.size();

	return 0;
}
