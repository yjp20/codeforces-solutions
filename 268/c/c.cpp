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

int N, M;
vector<pair<int,int>> arr;

int main() {
	cin >> N >> M;
	cout << min(N, M)+1 << endl;
	for (int i=0; i<=min(N,M); i++) {
		cout << min(N,M)-i << " " << i << endl;
	}

	return 0;
}
