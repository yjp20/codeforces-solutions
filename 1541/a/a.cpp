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

int T;

int main() {
	cin >> T;
	for (int t=0; t<T; t++) {
		int N;
		cin >> N;
		int A[N];
		for (int i=0; i<N; i++) A[i] = i;
		for (int i=0; i<N/2; i++) {
			swap(A[i*2], A[i*2+1]);
		}
		if (N%2 == 1) {
			swap(A[N-1], A[N-2]);
		}
		for (int i=0; i<N; i++) cout << A[i] + 1 << " ";
		cout << endl;
	}

	return 0;
}
