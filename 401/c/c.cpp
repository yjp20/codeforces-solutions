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
	int N, M;
	cin >> N >> M;

	if (N > M+1 || 2*N+2 < M) {
		cout << -1 << endl;
		return 0;
	}

	if (N == M+1) {
		cout << 0;
		N -= 1;
	}

	while (N || M) {
		if (M == N || M == 1) {
			cout << "1";
			M --;
		}
		else if (M > N) {
			cout << "11";
			M -= 2;
		}

		if (N) {
			cout << "0";
			N --;
		}
	}

	cout << endl;


	// 0 max
	// N - 1 <= M;
	// 2*N + 2 >= M;
	return 0;
}
