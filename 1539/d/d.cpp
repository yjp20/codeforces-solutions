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

/*
 * 3 1
 * 4 3
 * 5 1
 */

ll N;
ll b, ct, total;

int main() {
	cin >> N;
	pair<ll, ll> AB[N];
	for (int i=0; i<N; i++) {
		cin >> AB[i].second >> AB[i].first;
		total += AB[i].second;
	}
	sort(AB, AB+N);
	for (int i=0; i<N; i++) {
		ll borrow = min(max(AB[i].first-b, 0LL), total-b);
		ll discounted = min(AB[i].second, total - borrow - b);
		ct += borrow;
		b += borrow + discounted;
	}

	cout << b + ct;
	return 0;
}
