// youngjinp20
// 2020 04

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
using namespace std;

typedef long long ll;

int main() {
	int N;
	cin >> N;
	cout << (N*N+1)/2 << endl;
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			cout << ((i+j)&1 ? '.' : 'C');
		}
		cout << endl;
	}

	return 0;
}
