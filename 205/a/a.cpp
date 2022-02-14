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

int N;
int A[100005];
int B[100005];

int main() {
	cin >> N;

	for (int i=0; i<N; i++) {
		cin >> A[i];
		B[i] = A[i];
	}

	sort(A, A+N);

	if (A[0] == A[1]) {
		cout << "Still Rozdil";
		return 0;
	}

	cout << min_element(B, B+N) - B + 1;

	return 0;
}
