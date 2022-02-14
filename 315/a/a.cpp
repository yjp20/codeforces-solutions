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

const int MAX = 1000+1;
int N, ct;
int used[MAX];
int bottle[MAX];

int main() {
	cin >> N;

	for (int i=1; i<=N; i++) {
		int a, b;
		cin >> a >> b;
		bottle[i] = a;
		used[b] = used[b] ? -1 : i;
	}

	for (int i=1; i<=N; i++) {
		if (used[bottle[i]] && used[bottle[i]] != i) {
			ct ++;
		}
	}

	cout << N - ct;

	return 0;
}
