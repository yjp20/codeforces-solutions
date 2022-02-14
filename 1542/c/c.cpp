// youngjinp20
// 2021 07

#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef unsigned long long ll;

const ll MOD = 1e9 + 7;
const ll MAX = 43;
ll list[MAX+1];

void sieve() {
	for (int i=1; i<=MAX; i++) {
		list[i] = i;
		for (int j=1; j<i; j++)
			if (list[i] % list[j] == 0)
				list[i] /= list[j];
	}
}

int main() {
	int T;
	cin >> T;
	sieve();

	for (int t=0; t<T; t++) {
		ll N;
		cin >> N;

		ll mult = 1;
		for (int i=0; i<MAX; i++) {
			mult *= list[i];
		}

		ll ct = 0;
		ll sum = 0;
		for (int i=MAX; i>=1; i--) {
			if (list[i] != 1) {
				mult /= list[i];
				sum += (N / mult - ct) * (i);
				ct += (N / mult - ct);
			}
		}
		cout << sum % MOD  << endl;
	}

	return 0;
}
