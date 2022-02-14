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
char S[MAX+1];

int main() {
	int T;
	cin >> T;
	while (T--) {
		cin >> S;
		int len = strlen(S);
		int ct[26] = {0};
		int dp[len+1];
		char ans[len+1];
		ans[len] = 0;

		for (int i=0; i<len; i++) {
			ct[S[i] - 'a']++;
		}

		int l=0, r=len;
		while (r-l > 1) {
			int mid = (l+r) / 2;
			int used[26] = {0};

			for (int i=0; i<=len; i++) {
				dp[i] = 0;
				ans[i] = 0;
			}

			dp[0] = -1;
			int cnd = 0;
			bool good = true;
			for (int j=0; j<26; j++) {
				if (ct[j] - used[j] == 0) continue;
				used[j] ++;
				ans[0] = j + 'a';
				break;
			}

			for (int i=1; i<len; i++, cnd++) {
				bool found = false;
				for (int j=0; j<26; j++) {
					if (ct[j] - used[j] == 0) continue;
					if ('a' + j == ans[cnd]) {
						dp[i] = ++cnd;
					} else {
						while (cnd >= 0 && 'a' + j != ans[cnd]) {
							cnd = dp[cnd];
						}
						dp[i] = cnd;
					}

					if (dp[i] <= mid) {
						used[j] ++;
						ans[i] = j + 'a';
						found = true;
						break;
					}
				}
				if (!found) {
					good = false;
					break;
				}
			}

			for (int i=0; i<len; i++) {
				cout << d(ans[i]) << d(dp[i]) << endl;
			}

			if (!good) {
				l = mid + 1;
			} else {
				r = mid;
			}
		}

		cout << d(l) << endl;
		cout << ans << endl;
	}

	return 0;
}
