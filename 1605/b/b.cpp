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
		int A[N], B[N];
		vector<int> ans;

		for (int i=0; i<N; i++) {
			scanf("%1d", &A[i]);
			B[i] = A[i];
		}
		sort(A, A+N);

		for (int i=0; i<N; i++) {
			if (A[i] != B[i]) {
				ans.push_back(i+1);
			}
		}

		cout << (ans.size() ? 1 : 0) << endl;
		if (ans.size()) {
			cout << ans.size() << " ";
			for (int e : ans) {
				cout << e << " ";
			}
			cout << endl;
		}
	}

	return 0;
}
