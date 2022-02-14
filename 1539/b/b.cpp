// youngjinp20
// 2021 06

#include<stdio.h>
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

#define by(x) [](const auto& a, const auto& b) { return a.x < b.x; }
#define byr(x) [](const auto& a, const auto& b) { return a.x > b.x; }
#define smax(a, b) ((a) < (b) ? ((a)=(b), true) : false)
#define smin(a, b) ((a) > (b) ? ((a)=(b), true) : false)
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;
const int MAX = 1e5;

int main() {
	int N, Q;
	char S[MAX+1];
	int solve[MAX+1];
	cin >> N >> Q;
	cin >> S;
	for (int i=1; i<=N; i++) {
		solve[i] = solve[i-1] + S[i-1] - 'a' + 1;
	}
	for (int i=0; i<Q; i++) {
		int L, R;
		cin >> L >> R;
		cout << solve[R] - solve[L-1] << endl;
	}

	return 0;
}
