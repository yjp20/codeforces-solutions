// youngjinp20
// 2021 12

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
		int sum = 0;
		for (int i=0; i<N; i++) {
			int k;
			cin >> k;
			sum += k;
		}
		cout << (sum % N == 0 ? 0 : 1) << endl;
	}

	return 0;
}
