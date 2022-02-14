// youngjinp20
// 2021 06

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

int N;

int main() {
	cin >> N;
	int best = 0;
	for (int i=0; i<N; i++) {
		int t;
		cin >> t;
		best = max(best, t);
	}

	cout << best << endl;

	return 0;
}
