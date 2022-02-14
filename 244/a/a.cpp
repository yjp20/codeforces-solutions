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

const int MAX = 30;
int N, K;
int A[MAX];

int b[MAX][MAX];
bool used[MAX*MAX+1];

int main() {
	cin >> N >> K;
	for (int i=0; i<K; i++) {
		cin >> A[i];
		used[A[i]] = 1;
		b[i][0] = A[i];
	}

	int ct = 1;
	for (int i=0; i<K; i++) {
		for (int j=1; j<N; j++) {
			while (used[ct]) ct++;
			b[i][j] = ct++;
		}
	}

	for (int i=0; i<K; i++) {
		for (int j=0; j<N; j++)
			cout << b[i][j] << " ";
		cout << endl;
	}

	return 0;
}
