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

const int MAX = 5000;
int N;
int A[MAX];
bool used[MAX];

int main() {
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> A[i];
		A[i] --;
		if (A[i] < N) used[A[i]] = true;
	}

	int ct = 0;
	for (int i=0; i<N; i++) {
		ct += !used[i];
	}

	cout << ct;
	return 0;
}
