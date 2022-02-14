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

int main() {
	int N;
	char S[205];
	cin >> N;
	cin >> S;

	sort(S,S+N);
	sort(S+N,S+2*N);

	for (int i=0; i<N-1; i++) {
		if (S[i] < S[i+N] != S[i+1] < S[i+N+1]) {
			cout << "NO" << endl;
			return 0;
		}
	}

	for (int i=0; i<N; i++) {
		if (S[i] == S[i+N]) {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;
	return 0;
}
