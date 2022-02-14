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
		int N;
		cin >> N;
		int A[N];

		for (int i=0; i<N; i++) {
			int tmp;
			cin >> tmp;
			A[i] = tmp - 1;
		}

		sort(A, A+N);

		int best = 0;
		for (int i=N-1; i>=0; i--) {
			if (A[i] <= i) {
				best = i+1;
				break;
			}
		}

		cout << best+1 << endl;
	}

	return 0;
}
