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

int K;
int A[13];

int main() {
	cin >> K;

	for (int i=0; i<12; i++)
		cin >> A[i];

	sort(A, A+13, greater<int>());

	int i;
	int sum=0;
	for (i=0; i<13 && sum < K; i++)
		sum += A[i];

	if (i==13) cout << -1;
	else cout << i;

	return 0;
}
