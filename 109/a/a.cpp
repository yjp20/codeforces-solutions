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
	int N;
	cin >> N;
	int fours = N*2 % 7;
	int sevens = (N - fours*4)/7;

	if (fours < 0 || sevens < 0) {
		cout << -1 << endl;
		return 0;
	}

	for (int i=0; i<fours; i++) cout << 4;
	for (int i=0; i<sevens; i++) cout << 7;
	cout << endl;

	return 0;
}
