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
int A[50];
int B[50];

int main() {
	cin >> N;
	for (int i=0; i<N; i++)
		cin >> A[i];
	cin >> M;
	for (int i=0; i<M; i++)
		cin >> B[i];

	int best = 0;
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			if (B[j] % A[i] == 0) {
				best = max(best, B[j]/A[i]);
			}
		}
	}

	int ct = 0;
	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			if (B[j] % A[i] == 0 && B[j]/A[i] == best) ct++;
		}
	}

	cout << ct;


	return 0;
}
