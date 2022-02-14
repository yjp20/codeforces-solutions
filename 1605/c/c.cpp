// youngjinp20
// 2021 11

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<utility>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

int main() {
	int T;
	cin >> T;

	for (int t=0; t<T; t++) {
		int N;
		cin >> N;
		char S[N+1];
		cin >> S;
		int best = N+1;

		for (int i=0; i<N; i++) {
			int a=0, b=0, c=0;
			int idx = N+1;
			for (int j=0; j<7 && i+j < N; j++) {
				a += S[i+j] == 'a';
				b += S[i+j] == 'b';
				c += S[i+j] == 'c';
				if (j >= 1 && a > b && a > c) {
					idx = j + 1;
					break;
				}
			}
			best = min(best, idx);
		}

		if (best == N+1) {
			best = -1;
		}
		cout << best << endl;
	}

	return 0;
}
