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
int N, K;

int main() {
	cin >> N >> K;

	for (int i=0; i<K+1; i++) {
		cout << K-i+1 << " ";
	}

	for (int i=K+1; i<N; i++) {
		cout << i+1 << " ";
	}

	return 0;
}
