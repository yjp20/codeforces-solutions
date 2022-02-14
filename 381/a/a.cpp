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

const int MAX = 1e3;
int N;
int A[MAX];

int main() {
	cin >> N;
	for (int i=0; i<N; i++) cin >> A[i];

	bool turn=0;
	int sum[2] = {0};
	int l=0, r=N-1;
	while (l<=r) {
		if (A[l] > A[r]) sum[turn] += A[l++];
		else             sum[turn] += A[r--];
		turn = !turn;
	}

	cout << sum[0] << " " << sum[1] << endl;
	return 0;
}
