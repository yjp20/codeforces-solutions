// youngjinp20
// 2020 06

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int main() {
	int N, M;
	cin >> N >> M;

	ll ct = 0;
	int loc = 1;

	for (int i=0; i<M; i++) {
		int t;
		cin >> t;
		if (t < loc) ct += t - loc + N;
		if (t > loc) ct += t - loc;
		loc = t;
	}

	cout << ct;

	return 0;
}
