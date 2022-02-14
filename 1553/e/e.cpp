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

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;
		int P[N];
		int ct[N];
		for (int i=0; i<N; i++) {
			cin >> P[i];
			P[i] --;
			ct[i] = 0;
		}

		for (int i=0; i<N; i++) {
			ct[(i - P[i] + N) % N] ++;
		}

		vector<int> ans;

		for (int i=0; i<N; i++) {
			if ((N - ct[i] + 1) / 2 <= M) {
				ans.push_back(i);
			}
		}

		cout << ans.size() << " ";
		for (auto e : ans) cout << e << " ";
		cout << endl;
	}

	return 0;
}
