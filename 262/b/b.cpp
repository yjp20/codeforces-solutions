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
int N, K;
int A[MAX];
vector<int> negs;

int main() {
	cin >> N >> K;

	int sum = 0;
	int m = 1e9;

	for (int i=0; i<N; i++) {
		cin >> A[i];
		if (A[i] < 0) negs.push_back(A[i]);
		sum += A[i];
		m = min(abs(A[i]), m);
	}

	sort(negs.begin(), negs.end());

	int size = negs.size();
	for (int i=0; i<K && i<size; i++) {
		sum -= 2*negs[i];
	}

	if (max(0, K-size)&1) {
		sum -= 2*m;
	}

	cout << sum;

	return 0;
}
