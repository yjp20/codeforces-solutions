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
		int N;
		cin >> N;
		int A[N], sum=0;
		for (int i=0; i<N; i++) {
			cin >> A[i];
			sum += A[i];
		}

		if (sum % N != 0) {
			cout << -1 << endl;
			continue;
		}

		int ans=0;
		for (int i=0; i<N; i++) {
			ans += A[i] > sum / N;
		}

		cout << ans << endl;
	}
	return 0;
}
