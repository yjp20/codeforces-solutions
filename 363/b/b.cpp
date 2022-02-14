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

const int MAX = 1.5e5;
int N, K, sum;
int H[MAX];

int main() {
	cin >> N >> K;

	for (int i=0; i<K; i++) {
		cin >> H[i];
		sum += H[i];
	}

	int best = sum;
	int best_idx = 0;

	for (int i=K; i<N; i++) {
		cin >> H[i];
		sum += H[i];
		sum -= H[i-K];
		smin(best, sum) && (best_idx = i-K+1);
	}

	cout << (best_idx+1);

	return 0;
}
