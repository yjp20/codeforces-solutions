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
	bool white = N%2 == 0;
	cout << (white ? "white" : "black") << endl;
	if (white) {
		cout << "1 2" << endl;
	}
	return 0;
}
