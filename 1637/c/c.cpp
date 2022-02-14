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

		for (int i=0; i<N; i++) {
			cin >> A[i];
		}

		int odd = 0;
		int not_zero = 0;
		int larger_than_two = 0;
		long long sum = 0;
		for (int i=1; i<N-1; i++) {
			if (A[i] % 2 == 1)
				odd ++;
			if (A[i] >= 2)
				larger_than_two ++;
			if (A[i])
				not_zero ++;

			sum += (A[i] + 1) / 2;
		}

		if (N == 3 && odd == 1 || larger_than_two == 0) {
			cout << -1 << endl;
			continue;
		}

		cout << sum << endl;
	}

	return 0;
}
