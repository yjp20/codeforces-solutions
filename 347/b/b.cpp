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
int N;
int A[MAX];

int main() {
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> A[i];
	}

	int matched = 0;
	bool hasSwap = false;

	for (int i=0; i<N; i++) {
		if (i == A[i]) matched ++;
		else if (A[A[i]] == i) hasSwap = true;
	}

	cout << matched + (matched != N) + hasSwap;

	return 0;
}
