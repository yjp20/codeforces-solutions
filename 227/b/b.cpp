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
ll N, M;
ll A[MAX+1];

int main() {
	cin >> N;

	for (int i=1; i<=N; i++) {
		int t;
		cin >> t;
		A[t] = i;
	}

	cin >> M;

	ll ct=0;

	for (int i=0; i<M; i++) {
		int t;
		cin >> t;
		ct += A[t];
	}

	cout << ct << " " << (N+1)*M - ct;

	return 0;
}
