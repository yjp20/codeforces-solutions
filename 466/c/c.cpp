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
typedef long long ll;

const int MAX = 5e5;
int N;
int A[MAX+1];
ll sum[MAX+1];

int main() {
	cin >> N;
	for (int i=1; i<=N; i++) {
		cin >> A[i];
	}

	for (int i=1; i<=N; i++) {
		sum[i] = sum[i-1] + A[i];
	}

	if (sum[N] % 3) {
		cout << 0 << endl;
		return 0;
	}

	ll ct=0;
	vector<int> a, b;
	for (int i=1; i<N; i++) {
		if (sum[i] == sum[N] / 3) a.push_back(i);
		if (sum[i] == sum[N] * 2 / 3) b.push_back(i);
	}

	for (auto e : a) {
		ct += b.end() - upper_bound(b.begin(), b.end(), e);
	}

	cout << ct << endl;

	return 0;
}
