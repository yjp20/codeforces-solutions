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

int N, X;
int sum;

int main() {
	cin >> N >> X;

	for (int i=0; i<N; i++) {
		int tmp;
		cin >> tmp;
		sum += tmp;
	}

	cout << (abs(sum)+X-1) / X << endl;
	return 0;
}
