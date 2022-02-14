// youngjinp20
// 2020 04

#include <bits/stdc++.h>
#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
using namespace std;

typedef long long ll;

const int MAX = 1e3;
int S, N;
pair<int,int> A[MAX];

int main() {
	cin >> S >> N;

	for (int i=0; i<N; i++) {
		int x, y;
		cin >> x >> y;
		A[i] = {x,y};
	}

	sort(A, A+N);

	for (int i=0; i<N; i++) {
		if (A[i].first >= S) {
			cout << "NO";
			return 0;
		}
		S += A[i].second;
	}

	cout << "YES";

	return 0;
}
