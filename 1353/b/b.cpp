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

int main() {
	int T;
	cin >> T;
	for (int t=1; t<=T; t++) {
		int N, K;
		cin >> N >> K;
		int A[N];
		int B[N];

		for (int i=0; i<N; i++) cin >> A[i];
		for (int i=0; i<N; i++) cin >> B[i];

		sort(A, A+N);
		sort(B, B+N, greater<int>());

		for (int i=0; i<K; i++) {
			if (B[i] > A[i])
				A[i] = B[i];
		}

		int sum = 0;
		for (int i=0; i<N; i++) {
			sum += A[i];
		}

		cout << sum << endl;
	}

	return 0;
}
