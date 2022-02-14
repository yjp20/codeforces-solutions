// youngjinp20
// 2020 06

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const int MAX = 1e5;
int N;
int L[MAX];
int R[MAX];

int main() {
	cin >> N;

	int m = 1e9;
	int n = 0;

	for (int i=0; i<N; i++) {
		cin >> L[i] >> R[i];
		m = min(L[i], m);
		n = max(R[i], n);
	}

	for (int i=0; i<N; i++) {
		if (L[i] == m && R[i] == n) {
			cout << i+1 << endl;
			return 0;
		}
	}

	cout << -1;
	return 0;
}
