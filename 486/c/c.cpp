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
int N, P;
char S[MAX+1];

int main() {
	cin >> N >> P;
	cin >> S;

	P = min(P-1, N-P);

	int sum = 0;
	for (int i=0; i<N/2; i++) {
		int diff = abs(S[i] - S[N-i-1]);
		sum += min(diff, 26 - diff);
	}

	int farthest_left=0;
	int farthest_right=0;
	for (int i=P; i<N/2; i++) {
		if (S[i] != S[N-i-1]) {
			farthest_left = max(farthest_left, i-P);
		}
	}

	for (int i=P; i>=0; i--) {
		if (S[i] != S[N-i-1]) {
			farthest_right = max(farthest_right, P-i);
		}
	}

	cout << sum + min(2*farthest_left+farthest_right, farthest_left+2*farthest_right) << endl;

	return 0;
}
