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
	ll best = 1e18;

	cin >> N;
	for (int i=0; i<N; i++)
		cin >> A[i];

	sort(A, A+N);

	int i;
	for (i=1; i<=100000; i++) {
		if (log10(i)*(N-1) > 15) continue;

		ll sum = 0;
		ll it = 1;
		for (int j=0; j<N; j++) {
			sum += abs(A[j] - it);
			it *= i;
		}

		if (sum < best) best = sum;
		else break;
	}

	cout << best;

	return 0;
}
