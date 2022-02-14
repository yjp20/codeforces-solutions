// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;

int T,N;
int A[150001];
int dp[150001];

int main() {
	cin >> T;
	for (int t=0; t<T; t++) {
		cin >> N;
		for (int i=0; i<N; i++) {
			cin >> A[i];
		}
		dp[N-1] = A[N-1];
		for (int i=N-2; i>=0; i--) {
			dp[i] = min(dp[i+1], A[i]);
		}

		int ct = 0;
		for (int i=0; i<N; i++) {
			if (A[i] != dp[i]) ct ++;
		}
		cout << ct << "\n";
	}
	return 0;
}
