// youngjinp20
// 2021 06

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

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
	for (int t=0; t<T; t++) {
		int N, L, R;
		cin >> N >> L >> R;
		int A[N];
		for (int i=0; i<N; i++) cin >> A[i];
		sort(A, A+N);

		ll sum = 0;
		for (int i=0; i<N; i++) {
			int up = upper_bound(A, A+N, R - A[i]) - A;
			int down = lower_bound(A, A+N, L - A[i]) - A;
			sum += up - down;
			if (down <= i && i < up) sum --;
		}

		cout << sum / 2 << endl;
	}

	return 0;
}
