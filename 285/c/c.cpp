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

const int MAX = 3e5;
int N;
int A[MAX];

int main() {
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> A[i];
	}

	sort(A, A+N);

	ll cost = 0;
	for (int i=0; i<N; i++) {
		cost += abs(A[i] - i - 1);
	}

	cout << cost << endl;

	return 0;
}
