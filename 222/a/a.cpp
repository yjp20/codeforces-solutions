// youngjinp20
// 2020 06

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

const int MAX = 1e5;
int N, K;
int A[MAX+1];

int main() {
	cin >> N >> K;

	for (int i=1; i<=N; i++) {
		cin >> A[i];
	}

	for (int i=K+1; i<=N; i++) {
		if (A[i] != A[i-1]) {
			cout << "-1" << endl;
			return 0;
		}
	}

	int m = 0;
	for (int i=1; i<K; i++) {
		if (A[i] != A[K])
			m = max(m, i);
	}

	cout << m;

	return 0;
}
