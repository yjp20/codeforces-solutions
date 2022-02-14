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

const int MAX = 1e5;
int N;
int C[MAX];

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> C[i];
	}

	sort(C, C+N);

	int best=0;
	int j=0;
	for (int i=0; i<N; i++) {
		for (; j<N && C[j] <= 2*C[i]; j++);
		best = max(best, j-i);
	}

	cout << N-best << endl;

	return 0;
}
