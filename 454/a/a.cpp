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

int main() {
	int N;
	cin >> N;

	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			int a = min(i, N-1-i);
			int b = min(j, N-1-j);
			cout << (a < N/2 - b ? '*' : 'D');
		}
		cout << endl;
	}

	return 0;
}
