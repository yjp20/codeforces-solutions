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

const int MAX = 800;
int N, X;
int A[MAX];

int main() {
	cin >> N >> X;

	for (int i=0; i<N; i++) {
		cin >> A[i];
	}

	sort(A, A+N);
	int down = lower_bound(A, A+N, X) - A;
	int up = upper_bound(A, A+N, X) - A;

	int left = down + 1;
	int right = up;
	int cost = 0;

	if (down == up) {
		left = right = up + 1;
		N ++;
		cost ++;
	}

	int mid = (N+1)/2;
	if (left <= mid && mid <= right) {
		cout << cost;
		return 0;
	}

	cout << cost + min({
		abs((N-right) - (right-1) - 1),
		abs((N-right) - (right-1)),
		abs((N-left) - (left-1) - 1),
		abs((N-left) - (left-1)),
	});

	return 0;
}
