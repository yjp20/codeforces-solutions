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

const int MAX = 100;
int N, A[MAX];
int total, sum;

int main() {
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> A[i];
		total += A[i];
	}
	sort(A, A+N, greater<int>());

	int i=0;
	while(i<N && sum <= total - sum) {
		sum += A[i++];
	}

	cout << i << endl;
	return 0;
}
