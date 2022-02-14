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

const int MAX = 1e3+1;
int N, M;
int A[MAX];
int B[MAX];
int cost1;
int cost2;

int main() {
	cin >> N >> M;

	for (int i=0; i<M; i++) {
		int t;
		cin >> t;
		A[t] ++;
		B[t] ++;
	}

	int it1 = 1;
	int it2 = MAX-1;

	for (int i=0; i<N; i++) {
		for (int j=it1; j<MAX; j++) {
			if (A[j] != 0) {
				A[j] --;
				A[j-1] ++;
				cost1 += j;
				it1 = max(j-1, 1);
				break;
			}
		}

		for (int j=it2; j>0; j--) {
			if (B[j] != 0) {
				B[j] --;
				B[j-1] ++;
				cost2 += j;
				it2 = j;
				break;
			}
		}
	}

	cout << cost2 << " " << cost1;

	return 0;
}
