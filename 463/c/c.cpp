// youngjinp20
// 2020 05

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const int MAX = 3000;
ll A[MAX][MAX];
ll x[2*MAX+1];
ll y[2*MAX+1];

int main() {
	ios::sync_with_stdio(false);
	int N;
	cin >> N;

	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			cin >> A[i][j];
		}
	}

	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			x[i+j] += A[i][j];
			y[i-j+N-1] += A[i][j];
		}
	}

	ll b1 = 0;
	int x1 = 0;
	int y1 = 0;

	ll b2 = 0;
	int x2 = 0;
	int y2 = 1;

	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			ll v = x[i+j] + y[i-j+N-1] - A[i][j];
			if ((i+j)%2 == 0 && smax(b1, v)) {
				x1 = i;
				y1 = j;
			}
			if ((i+j)%2 == 1 && smax(b2, v)) {
				x2 = i;
				y2 = j;
			}
		}
	}

	printf("%lld\n", b1+b2);
	printf("%d %d %d %d\n", x1+1, y1+1, x2+1, y2+1);

	return 0;
}
/*
  0 1 2 3 4
0
1
2
3
4
*/
