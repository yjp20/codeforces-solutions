// yjp20
// 2022 02

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
		int A[N];

		for (int i=0; i<N; i++) cin >> A[i];

		bool possible = false;
		for (int i=0; i<N-1; i++) {
			possible = possible || A[i] > A[i+1];
		}

		cout << (possible ? "YES" : "NO") << endl;
	}

	return 0;
}
