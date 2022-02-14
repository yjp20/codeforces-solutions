// youngjinp20
// 2021 07

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
char S[MAX+5];
int location[MAX];
int len;

int main() {
	scanf("%s", S);
	len = strlen(S);

	int l=0, r=len;
	for (int i=0; i<len; i++) {
		if (S[i] == 'r') {
			location[l++] = i+1;
		} else {
			location[--r] = i+1;
		}
	}

	for (int i=0; i<len; i++) {
		printf("%d\n", location[i]);
	}

	return 0;
}
