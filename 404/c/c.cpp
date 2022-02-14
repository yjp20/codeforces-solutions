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

const int MAX = 1e5;
ll N, K;
ll D[MAX];

vector<ll> num[MAX];
ll degree[MAX];

int main() {
	cin >> N >> K;

	for (int i=0; i<N; i++) {
		cin >> D[i];
		num[D[i]].push_back(i);
	}

	if (num[0].size() != 1 || K < num[1].size()) {
		cout << -1 << endl;
		return 0;
	}

	for (int i=1; i<MAX-1; i++) {
		if (num[i].size()*(K-1) < num[i+1].size()) {
			cout << -1 << endl;
			return 0;
		}
	}

	cout << N-1 << endl;
	for (int i=1; i<MAX; i++) {
		for (int j=0; j<num[i].size(); j++) {
			cout << num[i-1][(degree[i-1]++)/(K-(i!=1))]+1 << " " << num[i][j]+1 << endl;
		}
	}

	return 0;
}
