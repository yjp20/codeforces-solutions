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
char S[105];

int main() {
	cin >> N >> S;

	int ct = 0;
	for (int i=0; i<N; i++) {
		if (S[i] == '1') ct ++;
		else break;
	}

	cout << ct + (ct != N) << endl;
	return 0;
}
