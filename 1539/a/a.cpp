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
	int K;
	cin >> K;

	for (int i=0; i<K; i++) {
		ll N, X, T;
		cin >> N >> X >> T;
		ll g = T/X;
		ll ramp_len = min(N, g);
		ll ramp_ct = ramp_len - 1;
		ll ramp = (ramp_ct * ramp_ct + ramp_ct)/2;
		cout << ramp + (N-ramp_len) * g << endl;
	}

	return 0;
}
