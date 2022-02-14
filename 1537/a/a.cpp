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

int main() {
	int T;
	cin >> T;
	for (int t=0; t<T; t++) {
		int N, sum=0;
		cin >> N;

		for (int i=0; i<N; i++) {
			int tmp;
			cin >> tmp;
			sum += tmp;
		}

		if (sum == N) {
			cout << 0 << endl;
		} else if (sum < N) {
			cout << 1 << endl;
		} else {
			cout << sum - N << endl;
		}
	}

	return 0;
}
