// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

int n, k;
char S[200002];

int main() {
	scanf("%d %d\n", &n, &k);
	scanf("%s", S);

	if (n == 1 && k == 1) {
		printf("0\n");
	}
	else {
		int i=0, cur=1;
		if (k > 0 && S[0] > '1') {
			S[0] = '1';
			i++;
		}
		for (; i<k; i++) {
			while (S[cur] == '0') cur ++;
			if (cur >= n) break;
			S[cur] = '0';
		}
		printf("%s\n", S);
	}
	return 0;
}
