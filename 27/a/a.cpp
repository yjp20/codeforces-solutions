// youngjinp20
// 2020 07

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int N;
int A[3002];

int main() {
	cin >> N;

	for (int i=0; i<N; i++) {
		int x;
		cin >> x;
		A[x] = 1;
	}

	for (int i=1; i<=3001; i++) {
		if (!A[i]) {
			cout << i;
			return 0;
		}
	}

	return 0;
}
