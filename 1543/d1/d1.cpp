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
		int N, K;
		cin >> N >> K;
		int msk=0;
		for (int i=0; i<N; i++) {
			cout << (i ? i ^ (i-1) : 0) << endl;
			cout.flush();

			int R;
			cin >> R;
			if (R) break;
		}
	}

	return 0;
}
