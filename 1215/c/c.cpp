// youngjinp20
// 2019 09

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() {
	int n;
	int MAX=2e5+1;
	char a[MAX], b[MAX];
	vi t1, t2;
	scanf("%d\n%s\n%s", &n, a, b);

	int ct1=0, ct2=0;
	for (int i=0; i<n; i++) {
		if (a[i] == 'a' && b[i] == 'b') {
			ct1 ++;
			t1.push_back(i+1);
		}
		if (a[i] == 'b' && b[i] == 'a') {
			ct2 ++;
			t2.push_back(i+1);
		}
	}
	if ((ct1+ct2)%2 == 1) puts("-1");
	else {
		int n=0;
		n += ct1/2 + ct2/2;
		n += (ct1&ct2&1)*2;
		printf("%d\n", n);
		for (int i=0; i<ct1/2; i++) {
			printf("%d %d\n", t1[2*i], t1[2*i+1]);
		}
		for (int i=0; i<ct2/2; i++) {
			printf("%d %d\n", t2[2*i], t2[2*i+1]);
		}
		if (ct1&ct2&1) {
			printf("%d %d\n", t1[ct1-1], t1[ct1-1]);
			printf("%d %d\n", t1[ct1-1], t2[ct2-1]);
		}
	}
	return 0;
}
