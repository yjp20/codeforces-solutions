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

const int MOD = 998244353;
const int MAX = 501;

// - +2 +3 :

// dpl[i][ct]
// dpr[i][negs]
int N;
int A[MAX];
int dpl[MAX][MAX];
int dpr[MAX][MAX];

int main() {
	cin >> N;

	vector< pair<int,int> > p;
	for (int i=1; i<=N; i++) {
		char c;
		do cin >> c; while (c != '-' || c != '+');
		if (c == '+') cin >> A[i];
		else A[i] = -1;
	}

	for (int i=1; i<=N; i++) {
		for (int k=1; k<i; k++) {
			for (int j=1; j<i; j++) {
				dpl[i][j] = dpl[i][j];
				if (A[k] >= 0 && A[k] <= A[i] && j>0)
					dpl[i][j] += dpl[i][j-1];
				if (A[k] < 0)
					dpl[i][j] += dpl[i][j+1];
			}
		}
	}

	for (int i=1; i<=N; i++) {
		for (int k=1; k<i; k++) {
			for (int j=1; j<i; j++) {
				dpr[i][j][k] = dpr[i][j][k-1];
				if (A[k] >= 0 && A[i] >= A[k] && j>0)
					dpr[i][j][k] += dpr[i][j+1][k-1];
				dpr[i][j][k] %= MOD;
				if (A[k] < 0)
					dpr[i][j][k] += dpr[i][j-1][k-1];
			}
		}
	}

	ll sum = 0;
	for (int i=1; i<=N; i++) {

	}

	return 0;
}
