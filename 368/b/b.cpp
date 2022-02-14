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

const int MAX = 1e5+1;
int N, M;
int A[MAX];
int ct[MAX];
bool used[MAX];

int main() {
	cin >> N >> M;
	for (int i=1; i<=N; i++) {
		cin >> A[i];
	}

	int num = 0;
	for (int i=N; i>=1; i--) {
		if (!used[A[i]]) {
			num ++;
			used[A[i]] = true;
		}
		ct[i] = num;
	}

	for (int i=0; i<M; i++) {
		int t;
		cin >> t;
		cout << ct[t] << endl;
	}

	return 0;
}
