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

int N, M;
int A[105];

int main() {
	cin >> N >> M;

	for (int i=0; i<N; i++)
		cin >> A[i];

	sort(A, A+N);
	int sum=0;

	for (int i=0; i<M; i++) {
		if (A[i] < 0) sum -= A[i];
	}

	cout << sum;

	return 0;
}
