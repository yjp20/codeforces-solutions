// youngjinp20
// 2021 08

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
	ll i[3];
	cin >> i[0] >> i[1] >> i[2];

	sort(i, i+3);
	ll sum = i[0] + i[1] + i[2];
	i[2] = min(i[2], 2 * (sum - i[2]));

	cout << (i[0] + i[1] + i[2]) / 3;

	return 0;
}
