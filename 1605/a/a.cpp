// youngjinp20
// 2021 11

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
		int A1, A2, A3;
		cin >> A1 >> A2 >> A3;
		cout << ((((A1+A3 - 2*A2) % 3 + 3) % 3) ? 1 : 0) << endl;
	}

	return 0;
}
