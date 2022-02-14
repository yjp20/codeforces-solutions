// youngjinp20
// 2021 07

#include<string.h>
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

int main() {
	int Q;
	cin >> Q;

	while (Q--) {
		char S[501], T[1001];
		cin >> S >> T;
		int s_len = strlen(S);
		int t_len = strlen(T);
		bool dp1[501][501] = {}, dp2[501][501] = {};

		for (int i=0; i<s_len; i++) {
			dp1[i][i] = S[i] == T[0];
			dp2[i][i] = S[i] == T[t_len-1];
			for (int j=1; i+j<s_len; j++) {
				dp1[i][i+j] = dp1[i][i+j-1] && S[i+j] == T[j];
				dp2[i][i+j] = dp2[i][i+j-1] && S[i+j] == T[t_len-j-1];
			}
		}

		bool good = false;
		for (int i=0; i<s_len; i++) {
			for (int j=0; i+j<s_len; j++) {
				if (i+j*2+1 < t_len) continue;
				if (dp1[i][i+j] && dp2[i+j-(t_len-j-1)][i+j]) good = true;
			}
		}
		cout << (good ? "YES" : "NO") << endl;
	}

	return 0;
}
