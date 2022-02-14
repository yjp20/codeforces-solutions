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

const int MAX = 1e5;
int N;
int A[MAX];
int B[MAX];

int main() {
	cin >> N;
	int m = 0;

	if (N == 1) {
		cout << 1;
		return 0;
	}

	for (int i=0; i<N; i++) {
		cin >> A[i];
		if (i >= 2) {
			if (A[i] == A[i-1] + A[i-2]) {
				m = max(m, B[i] = B[i-1] + 1);
			}
		}
	}


	cout << m+2;

	return 0;
}
