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
#include<set>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

int main() {
	set<int> K;
	K.insert(10);
	K.insert(10);
	K.insert(20);
	K.insert(30);
	K.insert(40);
	K.insert(50);

	cout << upper_bound(K.begin(), K.end(), 10) - lower_bound(K.begin(), K.end(), 30);

	return 0;
}
