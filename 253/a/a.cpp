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
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int N, M;
	char G = 'G';
	char B = 'B';
	cin >> N >> M;

	if (N < M) {
		swap(G,B);
		swap(N,M);
	}

	for (int i=0; i<M; i++)
		cout << B << G;
	for (int i=0; i<N-M; i++)
		cout << B;

	return 0;
}
