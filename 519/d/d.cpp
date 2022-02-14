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
#include<map>
#include<string.h>

#define d(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
using namespace std;
typedef long long ll;

const int MAX = 1e5;
int X[26];
char S[MAX+1];

map<ll, ll> presum[26];

int main() {
	for (int i=0; i<26; i++) {
		cin >> X[i];
	}
	cin >> S;
	int len = strlen(S);

	ll ct = 0;
	ll sum = 0;
	for (int i=0; i<len; i++) {
		int c = S[i] - 'a';
		ct += presum[c][sum];
		sum += X[c];
		presum[c][sum] ++;
	}

	cout << ct << endl;

	return 0;
}
