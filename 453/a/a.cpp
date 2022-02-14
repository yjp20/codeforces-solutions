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

int M, N;

int main() {
	cin >> M >> N;

	double ans;
	for (int i=1; i<=M; i++) {
		ans += i * (pow((double) i/M, N) - pow((double) (i-1)/M, N));
	}

	cout << ans << endl;
	return 0;
}
