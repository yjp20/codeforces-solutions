// youngjinp20
// 2020 08

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int main() {
	int N;
	ll A[100005];
	cin >> N;


	for (int i=0; i<N; i++) {
		cin >> A[i];
	}

	if (N == 1) {
		printf("1 1\n%d\n1 1\n0\n1 1\n0", -A[0]);
		return 0;
	}

	printf("%d %d\n%lld\n%d %d\n", 1, 1, -A[0], 2, N);

	for (int i=1; i<N; i++) {
		ll val = A[i] * (N-1);
		printf("%lld ", val);
		A[i] += val;
	}

	cout << endl;
	cout << 1 << " " << N << endl << 0 << " ";

	for (int i=1; i<N; i++) {
		printf("%lld ", -A[i]);
	}

	return 0;
}
