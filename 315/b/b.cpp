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

const int MAX = 1e5+1;
int N, M;
int A[MAX];

int main() {
	cin >> N >> M;
	for (int i=1; i<=N; i++) {
		cin >> A[i];
	}

	int a = 0;

	for (int i=0; i<M; i++) {
		int t;
		cin >> t;

		switch (t) {
			case 1:
				int v, x;
				cin >> v >> x;
				A[v] = x - a;
				break;
			case 2:
				int y;
				cin >> y;
				a += y;
				break;
			case 3:
				int q;
				cin >> q;
				cout << a + A[q] << endl;
				break;
		}
	}

	return 0;
}
