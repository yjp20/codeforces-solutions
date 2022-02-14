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

int N, M;
int A[100][100];

int main() {
	cin >> N >> M;

	for (int i=0; i<N; i++) {
		for (int j=0; j<M; j++) {
			scanf("%1d", &A[j][i]);
		}
	}

	int m[M];
	for (int j=0; j<M; j++) {
		m[j] = *max_element(A[j], A[j] + N);
	}

	int ct=0;
	for (int i=0; i<N; i++) {
		bool best = false;
		for (int j=0; j<M; j++) {
			if (A[j][i] == m[j]) {
				best = true;
				break;
			}
		}
		ct += best;
	}

	cout << ct;

	return 0;
}
