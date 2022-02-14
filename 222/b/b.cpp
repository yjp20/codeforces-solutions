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

const int MAX =1e3;
int N, M, K;
int table[MAX+1][MAX+1];
int map_x[MAX+1];
int map_y[MAX+1];

int main() {
	scanf("%d %d %d", &N, &M, &K);

	for (int i=1; i<=MAX; i++) {
		map_x[i] = map_y[i] = i;
	}

	for (int i=1; i<=N; i++) {
		for (int j=1; j<=M; j++) {
			scanf("%d\n", &table[i][j]);
		}
	}

	for (int i=0; i<K; i++) {
		char S;
		int X, Y;
		scanf("%c %d %d\n", &S, &X, &Y);

		if (S == 'c') swap(map_y[X], map_y[Y]);
		if (S == 'r') swap(map_x[X], map_x[Y]);
		if (S == 'g') printf("%d\n", table[map_x[X]][map_y[Y]]);
	}

	return 0;
}
