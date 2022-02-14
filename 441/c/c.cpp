// youngjinp20
// 2021 08

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

int N, M, K;

int main() {
	cin >> N >> M >> K;

	vector<vector<pair<int,int>>> arr(K, vector<pair<int,int>>());

	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			int idx = min((i*M + j) / 2, K-1);
			arr[idx].push_back({i+1, i%2 == 0 ? j+1 : M-j});
		}
	}

	for (int i=0; i<K; i++) {
		cout << arr[i].size() << " ";
		for (auto e : arr[i]) {
			cout << e.first << " " << e.second << " ";
		}
		cout << endl;
	}

	return 0;
}
