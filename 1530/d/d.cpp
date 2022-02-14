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
		int N;
		cin >> N;

		int last = 0;
		int happy = 0;
		int A[N+1];
		int ans[N+1];
		bool used[N+1];
		queue<int> prio;

		for (int i=0; i<=N; i++) {
			ans[i] = used[i] = 0;
		}

		for (int i=1; i<=N; i++) {
			cin >> A[i];
			if (!used[A[i]]) {
				ans[i] = A[i];
				used[A[i]] = true;
				happy ++;
			}
		}

		for (int i=1; i<=N; i++) {
			if (ans[i] && !used[i]) last = i;
			if (!ans[i] && !used[i]) prio.push(i);
		}

		if (last == 0 && prio.size()) {
			last = prio.front();
			prio.pop();
			if (prio.size() == 0) {
				int eff = 0;
				while (ans[++eff] != A[last]);
				used[ans[eff]] = false;
				ans[eff] = last;
				used[last] = true;
			}
		}

		while (!prio.empty()) {
			int t = prio.front();
			prio.pop();
			ans[t] = last;
			used[last] = true;
			last = t;
		}

		int it = 0;
		for (int i=1; i<=N; i++) {
			if (!ans[i]) {
				while (used[++it]);
				ans[i] = it;
			}
		}

		cout << happy << endl;
		for (int i=1; i<=N; i++) {
			cout << ans[i] << " ";
		}
		cout << endl;
	}

	return 0;
}
