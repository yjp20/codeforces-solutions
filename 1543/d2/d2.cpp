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

int tmp[100];

int main() {
	int T;
	cin >> T;

	while (T--) {
		int N, K;
		cin >> N >> K;
		int msk=0;
		for (int i=0; i<N; i++) {
			int sum = 0;
			int place = 1;
			int j = i;
			int t = i-1;

			while (j) {
				int displace = (K + (j%K) - (t%K)) % K;
				sum += (i%2 ? (K-displace)%K : displace) * place;
				place *= K;
				j /= K;
				t /= K;
			}

			cout << (i ? sum : 0) << endl;
			cout.flush();

			int R;
			cin >> R;
			if (R) break;
		}
	}

	return 0;
}
