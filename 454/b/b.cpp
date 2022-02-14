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
#include<numeric>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 1e5;
int N;
int A[MAX];

int ord[MAX];
int ind[MAX];

int main() {
	cin >> N;
	for (int i=0; i<N; i++)
		cin >> A[i];

	int ct = 0;
	int st = 0;

	for (int i=0; i<N; i++) {
		if (A[i] < A[(i-1+N) % N]) {
			ct ++;
			st = i;
		}
	}

	if (ct > 1) {
		cout << -1 << endl;
		return 0;
	}

	cout << (N-st) % N << endl;

	return 0;
}
