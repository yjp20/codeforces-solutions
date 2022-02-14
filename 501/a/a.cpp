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

int get(int x, int y) {
	return max(x*3/10, x - x/250 * y);
}

int main() {
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	int a = get(A, C);
	int b = get(B, D);
	cout << (a == b ? "Tie" : a > b ? "Misha" : "Vasya") << endl;
	return 0;
}
