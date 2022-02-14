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
		ll N;
		cin >> N;

		if (N <= 6) {
			cout << 15 << endl;
			continue;
		}

		cout << (N+1)/2 * 5 << endl;
	}

	return 0;
}
