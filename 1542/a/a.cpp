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
	for (int t=0; t<T; t++) {
		int N;
		cin >> N;
		int A[2*N];
		int odd = 0;
		for (int i=0; i<2*N; i++) {
			cin >> A[i];
			odd += A[i] % 2 == 1;
		}
		cout << (odd == N ? "Yes" : "No") << endl;
	}

	return 0;
}
