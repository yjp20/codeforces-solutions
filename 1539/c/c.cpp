// youngjinp20
// 2021 06

#include<stdio.h>
#include<cmath>
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;

typedef long long ll;

int main() {
	ll N, K, X;
	cin >> N >> K >> X;
	ll A[N];
	for (int i=0; i<N; i++) {
		cin >> A[i];
	}
	sort(A, A+N);
	vector<ll> gaps;
	for (int i=0; i<N-1; i++) {
		ll diff = A[i+1] - A[i];
		if (diff > X) {
			gaps.push_back((diff + X - 1) / X - 1);
		}
	}

	sort(gaps.begin(), gaps.end());

	int ct=0;
	for (auto e:gaps) {
		if (K-e < 0) break;
		ct ++;
		K -= e;
	}

	cout << gaps.size() - ct + 1<< endl;

	return 0;
}
