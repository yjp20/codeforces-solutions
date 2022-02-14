// youngjinp20
// 2021 06

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

const int MAX = 1e6;
int K;
char S[MAX+1];
int len;
ll r[MAX+1];
ll l[MAX+1];

int main() {
	cin >> K >> S;

	len = strlen(S);
	for (int i=0; i<len; i++) {
		l[i] = S[i] == '0';
		r[i] = S[i] == '0';
	}
	for (int i=1; i<len; i++) if(S[i] == '0') l[i] += l[i-1];
	for (int i=len-2; i>=0; i--) if (S[i] == '0') r[i] += r[i+1];

	ll bruh = 0;
	if (K == 0) {
		for (int i=0; i<len; i++) {
			bruh += l[i];
		}
		cout << bruh;
		return 0;
	}


	int ct=0;
	int i=0, j=0;
	ll sum=0;
	while (i < len) {
		if (i>0) ct -= S[i-1] == '1';
		while (ct < K && j < len) ct += S[j++] == '1';
		if (ct != K) break;
		if (S[i] == '1') {
			sum += (i-1 >= 0 ? l[i-1]+1 : 1) * (j < len ? r[j]+1 : 1);
		}
		i ++;
	}

	cout << sum << endl;

	return 0;
}
