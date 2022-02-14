// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int T;

int main() {
	scanf("%d", &T);

	for (int t=0; t<T; t++) {
		char s[200005];
		int dp[200005];
		scanf("%s", s);
		int len = strlen(s);
		int ct = 0;

		dp[0] = 0;
		for (int i=0; i<len-1; i++) {
			if (s[i] == '0') dp[i+1] = dp[i] + 1;
			else dp[i+1] = 0;
		}

		for (int i=0; i<len; i++) {
			int sum = 0;
			if (s[i] - '0' == 1) {
				for (int j=0; j<20 && i+j < len; j++) {
					sum <<= 1;
					sum += s[i+j] - '0';
					if (j+1 <= sum && sum <= j+1+dp[i]) ct ++;
				}
			}
		}

		printf("%d\n", ct);
	}

	return 0;
}
