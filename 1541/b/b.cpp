// youngjinp20
// 2021 06

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
typedef long long ll;

int main() {
	int T;
	cin >> T;
	for (int t=0; t<T; t++) {
		int N;
		cin >> N;

		int A[N+1];
		vector<ll> idx(2*N+1);

		for (int i=1; i<=N; i++) {
			cin >> A[i];
			idx[A[i]] = i;
		}

		ll ct = 0;
		for (ll i=1; i<=2*N; i++) {
			for (ll j=i+1; j<=2*N && i*j <= 2*N; j++) {
				if (idx[i] && idx[j]) ct += i*j == idx[i] + idx[j];
			}
		}
		cout << ct << endl;
	}

	return 0;
}
