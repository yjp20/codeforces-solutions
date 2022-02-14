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

const int MAX = 2e5;
ll N;
int A[MAX];

int main() {
	cin >> N;

	for (int i=0; i<N; i++)
		cin >> A[i];

	sort(A, A+N);

	cout << A[N-1] - A[0] << " ";

	if (A[N-1] != A[0]) {
		ll x = A + N - lower_bound(A, A+N, A[N-1]);
		ll y = upper_bound(A, A+N, A[0]) - A;
		ll mult =  x*y;
		cout << mult;
	}
	else {
		cout << (N)*(N-1)/2;
	}

	return 0;
}
